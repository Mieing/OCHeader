@class NSString, FinderLiveShopWindowAdItem_AdPage, FinderLiveShopWindowAdItem_Condition;

@interface MMFinderLiveAdsItem : NSObject <NSCopying>

@property (nonatomic) unsigned long long adId;
@property (retain, nonatomic) FinderLiveShopWindowAdItem_AdPage *adPage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *platformName;
@property (nonatomic) BOOL isPromoting;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) FinderLiveShopWindowAdItem_Condition *condition;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int subType;
@property (nonatomic) unsigned long long partnerAdId;

- (id)initWithPBItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFromPBItem:(id)a0;
- (void).cxx_destruct;

@end
