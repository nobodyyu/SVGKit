#import <Foundation/Foundation.h>
#import <asl.h>

#import "DDLog.h"

/**
 * Welcome to Cocoa Lumberjack!
 * 
 * The project page has a wealth of documentation if you have any questions.
 * https://github.com/robbiehanson/CocoaLumberjack
 * 
 * If you're new to the project you may wish to read the "Getting Started" wiki.
 * https://github.com/robbiehanson/CocoaLumberjack/wiki/GettingStarted
 * 
 * 
 * This class provides a logger for the Apple System Log facility.
 * 
 * As described in the "Getting Started" page,
 * the traditional DDLogWarn() function directs it's output to two places:
 * 
 * - Apple System Log
 * - StdErr (if stderr is a TTY) so log statements show up in Xcode console
 * 
 * To duplicate DDLogWarn() functionality you can simply add this logger and a tty logger.
 * However, if you instead choose to use file logging (for faster performance),
 * you may choose to use a file logger and a tty logger.
**/

@interface DDASLLogger : DDAbstractLogger <DDLogger>
{
	aslclient client;
}

+ (DDASLLogger *)sharedInstance;

// Inherited from DDAbstractLogger

// - (id <DDLogFormatter>)logFormatter;
// - (void)setLogFormatter:(id <DDLogFormatter>)formatter;

@end
