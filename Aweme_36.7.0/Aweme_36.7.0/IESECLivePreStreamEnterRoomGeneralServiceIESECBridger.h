@class NSString;
@protocol IESLiveEnterRoomPreMixGeneralService;

@interface IESECLivePreStreamEnterRoomGeneralServiceIESECBridger : NSObject <IESECLivePreStreamEnterRoomGeneralService>

@property (retain, nonatomic) id<IESLiveEnterRoomPreMixGeneralService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)showMaskView;
- (void)addInnerParams:(id)a0 forType:(id)a1;
- (id)getInnerParamsByType:(id)a0;
- (void)removeInnerParamsByType:(id)a0;
- (void)closeMaskViewWithClickOnBlankArea:(BOOL)a0;
- (void)enterRoomWithParams:(id)a0;
- (id)observeIESLivePipActions:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
