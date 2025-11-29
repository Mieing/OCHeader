@class NSMutableDictionary, BDPAdFrequencyControlManager_HG;

@interface BDPInterstitialFrequencyControlManager_HG : NSObject

@property (retain, nonatomic) NSMutableDictionary *data;
@property (retain, nonatomic) BDPAdFrequencyControlManager_HG *frequencyControl;

+ (id)shareManager;

- (BOOL)useNewFrequencyControl;
- (BOOL)shouldShowInterstitialForUniqueID:(id)a0 error:(id *)a1;
- (void)setCloseVideoAdTime:(double)a0 forUniqueID:(id)a1;
- (void)setLastInterstitialCloseTime:(double)a0 WithUniqueID:(id)a1;
- (BOOL)_enableFrequencyControl;
- (BOOL)p_oldFrequencyControlForUniqueID:(id)a0 error:(id *)a1;
- (BOOL)p_newFrequencyControlForUniqueID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
