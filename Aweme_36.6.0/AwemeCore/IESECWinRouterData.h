@class NSString, NSDictionary, IESECShopOwner, NSNumber;

@interface IESECWinRouterData : NSObject

@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *secShopId;
@property (copy, nonatomic) NSString *bindShopName;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) IESECShopOwner *shopOwner;
@property (copy, nonatomic) NSDictionary *entranceInfo;
@property (copy, nonatomic) NSNumber *targetTabType;
@property (copy, nonatomic) NSDictionary *preEnterStoreParams;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *enterStorePageExtraDic;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSplitScreen;
@property (nonatomic) BOOL enableCommonAdTrack;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (nonatomic) double routeStart;
@property (copy, nonatomic) id /* block */ containerWillClose;
@property (copy, nonatomic) id /* block */ closeProgressHandler;
@property (copy, nonatomic) NSString *extraSchema;
@property (copy, nonatomic) NSNumber *sortType;
@property (copy, nonatomic) NSNumber *sort;
@property (nonatomic) long long extraSchemaType;
@property (copy, nonatomic) NSString *entranceClassName;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (nonatomic) BOOL isFromAd;
@property (copy, nonatomic) NSString *whichAccount;
@property (readonly, nonatomic) BOOL isPreviewMode;
@property (copy, nonatomic) NSNumber *brandVerified;
@property (copy, nonatomic) NSString *previewToken;
@property (nonatomic) unsigned long long liveStyle;
@property (nonatomic) long long volumeType;
@property (nonatomic, getter=isStore) BOOL store;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) BOOL fromProfilePage;
@property (nonatomic) BOOL fromShopOrStorePage;
@property (copy, nonatomic) NSString *taskBannerContainerID;
@property (nonatomic) long long preSceneType;
@property (nonatomic) long long padSplitMode;
@property (copy, nonatomic) NSString *selectedFilterID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryId;
@property (nonatomic, getter=isCustom) BOOL custom;
@property (nonatomic) BOOL showAddCart;
@property (copy, nonatomic) NSString *liveMiniWindowRoomID;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *entrances;

- (void).cxx_destruct;

@end
