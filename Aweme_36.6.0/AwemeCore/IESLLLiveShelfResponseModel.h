@class IESLLLiveShelfUserLocation, IESLLLiveShelfMember, NSArray, NSString, IESLLLiveShelfBottomBarData, IESLLLiveShelfClientStyleConfig, NSDictionary, IESLLLiveShelfTopBarModel, IESLLLiveShelfRefreshConfig, IESLLLiveShelfCardBanner, NSNumber, IESLLLiveShelfCardListController;

@interface IESLLLiveShelfResponseModel : IESLLifeBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *liveRoomType;
@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSString *aggWebUrl;
@property (copy, nonatomic) IESLLLiveShelfCardListController *controller;
@property (copy, nonatomic) NSNumber *degradeSwitch;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSString *aggCardId;
@property (retain, nonatomic) IESLLLiveShelfCardBanner *cardBanner;
@property (retain, nonatomic) IESLLLiveShelfBottomBarData *bottomBarData;
@property (nonatomic) BOOL hideConsultBtn;
@property (copy, nonatomic) NSString *recommendRequestId;
@property (retain, nonatomic) IESLLLiveShelfMember *member;
@property (retain, nonatomic) IESLLLiveShelfUserLocation *userLocation;
@property (copy, nonatomic) NSDictionary *extraLog;
@property (copy, nonatomic) NSDictionary *commonSession;
@property (copy, nonatomic) NSDictionary *perfLog;
@property (retain, nonatomic) IESLLLiveShelfRefreshConfig *refreshConfig;
@property (copy, nonatomic) NSString *serverExtraInfo;
@property (nonatomic) long long innerTime;
@property (nonatomic) long long offset;
@property (nonatomic) long long nextOffset;
@property (nonatomic) long long selectedTabId;
@property (copy, nonatomic) NSDictionary *searchData;
@property (copy, nonatomic) NSDictionary *lynxCommonData;
@property (retain, nonatomic) IESLLLiveShelfClientStyleConfig *clientStyleConfig;
@property (copy, nonatomic) NSDictionary *lynxTrackInfo;
@property (copy, nonatomic) NSDictionary *roomData4Lynx;
@property (copy, nonatomic) NSString *shelfId;
@property (copy, nonatomic) NSString *roomUniqueKey;
@property (copy, nonatomic) NSDictionary *lynxTopBarNativeData;
@property (copy, nonatomic) NSDictionary *lynxTopBarServerData;
@property (retain, nonatomic) IESLLLiveShelfTopBarModel *topBar;
@property (copy, nonatomic) NSDictionary *poiSessionData;
@property (copy, nonatomic) NSDictionary *originData;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL isPreProcessed;
@property (nonatomic) BOOL isPreRendered;
@property (nonatomic) long long reqTabId;
@property (nonatomic) long long reqOffset;
@property (copy, nonatomic) NSDictionary *feConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardListJSONTransformer;
+ (id)topBarJSONTransformer;
+ (id)bottomBarDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
