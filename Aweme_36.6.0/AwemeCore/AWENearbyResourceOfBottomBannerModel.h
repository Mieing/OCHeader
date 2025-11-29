@class NSString, AWENearbyResourceOfCommonData, NSArray;

@interface AWENearbyResourceOfBottomBannerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *openSessionID;
@property (retain, nonatomic) AWENearbyResourceOfCommonData *commonData;
@property (copy, nonatomic) NSString *uiConfig;
@property (nonatomic) BOOL canDegrade;
@property (nonatomic) BOOL needInterceptAction;
@property (retain, nonatomic) NSArray *exclusiveCardList;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *contentURL;
@property (nonatomic) BOOL hiddenBar;
@property (copy, nonatomic) NSArray *bottomBarRelyRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
