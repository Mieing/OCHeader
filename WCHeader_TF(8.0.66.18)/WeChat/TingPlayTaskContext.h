@class NSString, CurrCategorySessionAttrContext;

@interface TingPlayTaskContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *currCategorySessionId;
@property (retain, nonatomic) NSString *currCategorySessionAttr;
@property (nonatomic) BOOL isRecommendSource;
@property (retain, nonatomic) CurrCategorySessionAttrContext *sessionAttrContext;
@property (nonatomic) BOOL shouldPlayRecommendSource;
@property (nonatomic) BOOL useForPlay;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) BOOL everPlay;
@property (retain, nonatomic) NSString *fromLineId;
@property (retain, nonatomic) NSString *fromLineTitle;

+ (void)initialize;

@end
