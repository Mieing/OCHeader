@class NSString, HTSLiveExpressionInfoCategory;

@interface HTSLiveHamletAvatarExpressionInfo : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long expressionType;
@property (retain, nonatomic) HTSLiveExpressionInfoCategory *category;
@property (nonatomic) BOOL hasCategory;

+ (id)descriptor;

@end
