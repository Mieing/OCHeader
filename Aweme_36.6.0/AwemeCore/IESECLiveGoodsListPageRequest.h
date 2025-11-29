@class NSString, NSDictionary, NSNumber;

@interface IESECLiveGoodsListPageRequest : IESECLiveAPIBaseRequest <IESECLiveListRequestParamsProtocol>

@property (nonatomic) BOOL disableEntranceInfoOpt;
@property (copy, nonatomic) NSString *entranceInfo;
@property (nonatomic) long long offset;
@property (nonatomic) long long limit;
@property (retain, nonatomic) NSString *uniqueIndex;
@property (nonatomic) BOOL usePromotionV2;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;
@property (nonatomic) BOOL useRecommendStore;
@property (nonatomic) BOOL isLinkMic;
@property (retain, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (retain, nonatomic) NSNumber *requestDataType;
@property (retain, nonatomic) NSString *headerCallBack;
@property (retain, nonatomic) NSNumber *isOpenCart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildParams;
- (id)buildParamsWithScene:(id)a0 preloadParams:(id)a1;
- (void).cxx_destruct;

@end
