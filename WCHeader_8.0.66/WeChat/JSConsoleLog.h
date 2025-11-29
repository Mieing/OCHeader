@class NSString;

@interface JSConsoleLog : NSObject

@property (nonatomic) unsigned int jsLogLevel;
@property (retain, nonatomic) NSString *jsLogInfo;

+ (id)extractLogInfo:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
