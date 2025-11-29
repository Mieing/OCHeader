@class NSString, NSDictionary, ACCBeautyPanel, UIView, ACCAnimatedButton;
@protocol ACCBeautyComponentConfigProtocol, ACCBeautyFeatureComponentViewDelegate, AWEComposerBeautyDelegate;

@interface ACCBeautyFeatureComponentView : NSObject

@property (retain, nonatomic) UIView *redView;
@property (retain, nonatomic) ACCAnimatedButton *modernBeautyButton;
@property (retain, nonatomic) NSString *modernLbl;
@property (retain, nonatomic) NSString *switchLbl;
@property (retain, nonatomic) NSDictionary *referExtra;
@property (retain, nonatomic) id<ACCBeautyComponentConfigProtocol> config;
@property (nonatomic) BOOL isBeautySwitchButtonSelected;
@property (weak, nonatomic) id<ACCBeautyFeatureComponentViewDelegate, AWEComposerBeautyDelegate> delegate;
@property (retain, nonatomic) ACCBeautyPanel *beautyPanel;
@property (retain, nonatomic) ACCAnimatedButton *beautySwitchButton;

- (void)hidePointView;
- (id)modernBeautyButtonConfig;
- (id)initWithModernTitle:(id)a0 switchTitle:(id)a1 referExtra:(id)a2;
- (void)clickBeautyButton:(id)a0;
- (void)clickSwitchBeautyBtn:(id)a0;
- (id)cachePointViewKey;
- (id)beautySwitchButtonConfig;
- (void)showPointView;
- (void).cxx_destruct;
- (void)dealloc;

@end
