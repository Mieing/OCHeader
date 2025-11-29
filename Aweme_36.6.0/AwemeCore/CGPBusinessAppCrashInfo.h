@class NSString;

@interface CGPBusinessAppCrashInfo : GPBMessage

@property (copy, nonatomic) NSString *callStack;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *gameId;

+ (id)descriptor;

@end
