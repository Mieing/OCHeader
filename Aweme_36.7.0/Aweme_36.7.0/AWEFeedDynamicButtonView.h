@class UIColor, NSString, NSObject;
@protocol AWEAdDynamicFlashManager;

@interface AWEFeedDynamicButtonView : AWEFeedLearnMoreModifyButtonView <AWEFeedLearnMoreModifyButtonProtocol>

@property (nonatomic) BOOL loopDynamicFlash;
@property (weak, nonatomic) NSObject<AWEAdDynamicFlashManager> *dynamicFlashManager;
@property (retain, nonatomic) UIColor *lastAnalysisColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowButtonWithAweme:(id)a0;

- (void)playFlashAnimated:(BOOL)a0;
- (void)dynamicFlash:(id)a0 textColor:(id)a1;
- (double)getTimeX;
- (double)getTimeY;
- (BOOL)checkColorEqual:(id)a0 colorB:(id)a1;
- (id)initWithAweme:(id)a0 context:(id)a1 element:(id)a2;
- (void).cxx_destruct;
- (id)defaultTextColor;
- (id)defaultBackgroundColor;
- (void)reset;

@end
