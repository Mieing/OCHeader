@class NSDictionary, HTSHotsoonRoomAPI, IESLiveSkipCertificateApi;
@protocol IESLiveCreateRoomPreCheckService, IESLiveMonitor, IESLiveVerifyConfigAdapter;

@interface IESLiveOpenAnchorRoomAdapter : NSObject

@property (retain, nonatomic) HTSHotsoonRoomAPI *api;
@property (retain, nonatomic) id<IESLiveCreateRoomPreCheckService> preCheckService;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveVerifyConfigAdapter> verifyConfig;
@property (nonatomic) unsigned long long createRoomType;
@property (retain, nonatomic) IESLiveSkipCertificateApi *skipApi;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (copy, nonatomic) NSDictionary *createRoomExtraParams;

- (id)handlePayloadParamsWithSourceParams:(id)a0 openLiveModel:(id)a1;
- (void)handlePayloadParamsForSecurity:(id)a0 openLiveModel:(id)a1;
- (void)roomCreated:(id)a0 withError:(id)a1 checkInfo:(id)a2 mediaType:(id)a3 completion:(id /* block */)a4;
- (unsigned long long)mapFromHTSLiveType:(unsigned long long)a0;
- (void)handleCreateRoomError:(id)a0 checkInfo:(id)a1;
- (BOOL)isValidRoom:(id)a0;
- (void)triggerFaceRecognitionWithScene:(id)a0 flow:(id)a1 ticket:(id)a2 uniqueId:(id)a3;
- (void)popupProfessionCertificatePanel:(id)a0;
- (id)mediaTypeFromLiveType:(unsigned long long)a0;
- (void)p_setupCreateRoomExtraParamsJust4Once;
- (void)createRoomWithType:(unsigned long long)a0 openLiveModel:(id)a1 params:(id)a2 enableShop:(BOOL)a3 completion:(id /* block */)a4;
- (void)triggerFaceRecognitionWithType:(id)a0;
- (void).cxx_destruct;

@end
