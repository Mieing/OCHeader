@class AWELiveRoomLinkNativeEnterPreParam;

@interface AWELiveRoomLinkNativePreParamSetTask : IESLiveLinkTask

@property (retain, nonatomic) AWELiveRoomLinkNativeEnterPreParam *enterParam;

- (void)addBusinessParamsWithRoomAisle:(id)a0 businessParams:(id)a1;
- (void)p_updateADParamsOFRoomAisle:(id)a0 roomLog:(id)a1;
- (void)p_updateBusinessOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (void)p_generateTrackParamsOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (void)p_generateEnterRoomFirstShowParamsOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (BOOL)p_isLiveWithParams:(id)a0;
- (BOOL)p_isVSRoomWithRoom:(id)a0;
- (BOOL)p_enableDrawVSWithParams:(id)a0;
- (id)cityName:(id)a0;
- (long long)ecomLivecouponMateIdWithDefaultRoom:(id)a0;
- (id)p_generateMutableContextParamsWithRoomLog:(id)a0 defaultRoom:(id)a1;
- (id)p_generateFirstShowParamsWithRoomLog:(id)a0 defaultRoom:(id)a1;
- (id)p_generateClickPramasWithRoomLog:(id)a0 defaultRoom:(id)a1;
- (void)p_generateVSParamsOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (BOOL)p_isVSLiveRoomWithRoom:(id)a0;
- (BOOL)p_isVSFirstPlayRoomWithRoom:(id)a0;
- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
