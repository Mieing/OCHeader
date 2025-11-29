@class BDPUniqueID, NSMutableDictionary;

@interface BDPInterstitialFrequencyControlManager : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *data;

+ (id)shareManager;

- (void)setShowAdTime:(long long)a0 forUniqueId:(id)a1;
- (BOOL)shouldShowInterstitialForUniqueId:(id)a0 error:(id *)a1;
- (BOOL)_enableFrequencyControl;
- (void).cxx_destruct;
- (id)init;

@end
