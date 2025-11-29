@class NSString, DTFLogFormatter, NSMutableDictionary;

@interface MPLoggingContext : NSObject

@property (nonatomic) int logType;
@property (retain, nonatomic) DTFLogFormatter *formatter;
@property (retain, nonatomic) NSMutableDictionary *logDict;
@property (retain, nonatomic) NSString *bizType;

- (void).cxx_destruct;

@end
