@class AWECommerceLinkUserInfoModel, NSArray, NSString;

@interface AWECommerceUserInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long starAtlasType;
@property (nonatomic) BOOL showStarAtlasGuide;
@property (retain, nonatomic) AWECommerceLinkUserInfoModel *linkUserInfo;
@property (nonatomic) BOOL hasAdsEntry;
@property (nonatomic) long long authVideoSettingType;
@property (nonatomic) BOOL canAuthAuctionAdVideo;
@property (nonatomic) BOOL isAdPartner;
@property (nonatomic, getter=isAdAuthorizationEnabled) BOOL adAuthorizationEnabled;
@property (nonatomic) BOOL adRevenueSharing;
@property (copy, nonatomic) NSArray *adRevenueRits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)starAtlasTypeJSONTransformer;
+ (id)linkUserInfoJSONTransformer;
+ (id)authVideoSettingTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldRequestAdsInProfile;
- (void).cxx_destruct;

@end
