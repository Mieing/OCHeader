@class IESLiveGuideModel, NSDictionary;

@interface IESLiveGuideStartLiveRequestParamsHandler : NSObject

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (copy, nonatomic) NSDictionary *invalidParamsDic;
@property (copy, nonatomic) NSDictionary *validParamsDic;

- (id)initWithGuideModel:(id)a0 attachingDIContext:(id)a1;
- (void)prepareCreateStartLiveRequest;
- (id)startCreateStartLiveRequest:(id)a0 mediaType:(id)a1;
- (id)handlePayloadParamsWithSourceParams:(id)a0 openLiveModel:(id)a1;
- (id)setupCreateRoomExtraParamsJust4Once;
- (id)p_addedAutoCoverConfigParams;
- (id)p_addedPlaybackRecordConfigParams;
- (void)handlePayloadParamsForSecurity:(id)a0 openLiveModel:(id)a1;
- (id)createStartLiveRequestParams:(id)a0;
- (id)currentInvalidParamsDic;
- (id)currentValidParamsDic;
- (void).cxx_destruct;

@end
