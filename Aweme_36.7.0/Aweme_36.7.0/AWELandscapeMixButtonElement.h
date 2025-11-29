@class UIButton;

@interface AWELandscapeMixButtonElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIButton *mixButton;
@property (nonatomic) BOOL hasTrackedMixEntryShow;

- (void)trackMixEntryShow;
- (void)trackMixEntryClick;
- (void)handleClickMix;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
