@class NSString, FinderLiveShopWindowAdItem_AdPage, FinderLiveShopWindowAdItem_Condition;

@interface FinderLiveShopWindowAdItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long adId;
@property (retain, nonatomic) FinderLiveShopWindowAdItem_AdPage *adPage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *platformName;
@property (nonatomic) unsigned int promoting;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) FinderLiveShopWindowAdItem_Condition *condition;
@property (nonatomic) int resourceType;
@property (nonatomic) int subType;
@property (nonatomic) unsigned long long partnerAdId;

+ (void)initialize;

@end
