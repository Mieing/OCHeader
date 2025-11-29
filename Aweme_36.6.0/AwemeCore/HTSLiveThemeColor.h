@class NSString;

@interface HTSLiveThemeColor : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *name;

+ (id)descriptor;

@end
