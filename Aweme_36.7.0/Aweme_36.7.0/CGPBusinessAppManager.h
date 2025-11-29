@class NSString;

@interface CGPBusinessAppManager : GPBMessage

@property (nonatomic) int action;
@property (copy, nonatomic) NSString *packageName;

+ (id)descriptor;

@end
