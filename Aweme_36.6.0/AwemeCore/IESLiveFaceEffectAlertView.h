@class UILabel, UIView;

@interface IESLiveFaceEffectAlertView : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) UIView *faceAlertView;
@property (retain, nonatomic) UILabel *hintLabel;

- (void)configSubviews;
- (void)hideFaceAlertView;
- (void)showHintLabelIfNeed:(id)a0;
- (void)showFaceAlertView;
- (void)configFaceAlertView;
- (void)configHintLabel;
- (void).cxx_destruct;
- (id)initWithScene:(long long)a0;

@end
