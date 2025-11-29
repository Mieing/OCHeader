@class IESHistoryFeedFeatureInfoHelper;

@interface IESRPBFeatures : NSObject

@property (retain, nonatomic) IESHistoryFeedFeatureInfoHelper *RPBHistoryHelper;
@property (nonatomic) long long rpb_tpst_stay_time_total;
@property (nonatomic) long long rpb_tpst_prepare_time_total;
@property (nonatomic) BOOL rpb_user_is_login;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
