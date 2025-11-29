@class NSMutableDictionary, NSMutableSet, BDECPigeonBizPageTrackConfig;

@interface BDECPigeonBizPageTrackUtil : NSObject

@property (retain, nonatomic) BDECPigeonBizPageTrackConfig *config;
@property (retain, nonatomic) NSMutableSet *didTrackViewEventLocationKeys;
@property (retain, nonatomic) NSMutableDictionary *paramsModelMap;

+ (double)defaultTimeout;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)trackModuleViewEventWithParamsModel:(id)a0;
- (void)trackModuleClickEventWithParamsModel:(id)a0;
- (id)generateClickUUID;
- (void)beginClickResultEventWithClickUUID:(id)a0 paramsModel:(id)a1;
- (id)pageCommonParams;
- (void)endClickResultEventWithClickUUID:(id)a0 clickResult:(id)a1;
- (void)p_forceEndClickResultListEventWithClickUUID:(id)a0 clickResult:(id)a1;
- (id)locationKeyWithDataId:(id)a0 locationType:(id)a1 locationSubType:(id)a2;
- (void)p_trackEvent:(id)a0 paramsModel:(id)a1;
- (void)p_finalTrackEvent:(id)a0 params:(id)a1;
- (void)endClickResultListEventWithClickUUID:(id)a0 clickResult:(id)a1;
- (void)beginClickResultListEventWithClickUUID:(id)a0 paramsModel:(id)a1;
- (void)updateClickResultListEventWithClickUUID:(id)a0 pendingActionTypeList:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
