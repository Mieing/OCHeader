@class NSString, NSDictionary, IESLLLiveShelfPagingDataController;

@interface IESLLLiveShelfHeaderViewModel : NSObject

@property (nonatomic) unsigned long long headerType;
@property (nonatomic) BOOL showOrderBtn;
@property (nonatomic) BOOL showConsultBtn;
@property (nonatomic) BOOL showMemberBtn;
@property (copy, nonatomic) NSString *memberSchemaUrl;
@property (copy, nonatomic) NSString *aggCardId;
@property (nonatomic) BOOL isShowPoiRankTag;
@property (nonatomic) BOOL isSupportJumpPoiDetail;
@property (copy, nonatomic) NSString *poiTitle;
@property (copy, nonatomic) NSString *poiDistance;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *poiRankName;
@property (copy, nonatomic) NSString *mainTabStr;
@property (copy, nonatomic) NSString *customTabStr;
@property (copy, nonatomic) NSString *customTipStr;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSDictionary *lynxTopBarNativeData;
@property (copy, nonatomic) NSDictionary *lynxTopBarServerData;
@property (copy, nonatomic) NSDictionary *lynxCommonData;
@property (copy, nonatomic) NSDictionary *lynxTrackInfo;
@property (copy, nonatomic) NSDictionary *poiSessionData;
@property (copy, nonatomic) NSDictionary *roomData4Lynx;
@property (nonatomic) unsigned long long singleStoreTopbarVersion;
@property (copy, nonatomic) NSString *poiRankTag;
@property (nonatomic) unsigned long long positionShowInfoType;
@property (weak, nonatomic) IESLLLiveShelfPagingDataController *dataController;

- (id)generateLynxTopBarData;
- (id)lynxTopBarNativeDataWithShelfModel:(id)a0 pageType:(long long)a1 actionType:(unsigned long long)a2;
- (void)configWithShelfModel:(id)a0 pageType:(long long)a1 actionType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
