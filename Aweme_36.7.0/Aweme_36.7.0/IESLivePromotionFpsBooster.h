@class IESLivePromotionFpsToken, NSString, CADisplayLink, NSHashTable;

@interface IESLivePromotionFpsBooster : NSObject <IESLivePromotionFpsService>

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSHashTable *candidateFPSTokens;
@property (retain, nonatomic) IESLivePromotionFpsToken *currentFPSToken;
@property (retain, nonatomic) IESLivePromotionFpsToken *backupFPSToken;
@property (retain, nonatomic) IESLivePromotionFpsToken *appearanceToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)setPreferredFPS:(double)a0 hint:(id)a1;
- (void)unsetPreferredFPS:(id)a0;
- (void)setupBooster;
- (void)boostFPSForVCAppearance;
- (void)boostFPSForVCDisAppearance;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEnabled;
- (void)tick:(id)a0;

@end
