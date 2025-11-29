@class NSString;

@interface IESLiveBgColor : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *bgColorStart;
@property (copy, nonatomic) NSString *bgColorEnd;

+ (id)descriptor;

@end
