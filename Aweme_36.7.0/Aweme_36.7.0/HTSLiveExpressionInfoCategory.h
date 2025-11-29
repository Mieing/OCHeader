@class NSString;

@interface HTSLiveExpressionInfoCategory : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *txtColor;
@property (copy, nonatomic) NSString *bgColor;

+ (id)descriptor;

@end
