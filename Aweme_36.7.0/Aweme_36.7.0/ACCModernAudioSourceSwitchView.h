@class UILabel, UIImageView;

@interface ACCModernAudioSourceSwitchView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) long long captionAudioSourceType;
@property (copy, nonatomic) id /* block */ didTapSwitchBlock;

+ (id)displayNameForCaptionAudioSourceType:(long long)a0;

- (void)updateWithCaptionAudioSourceType:(long long)a0;
- (void)performSwitchAction;
- (id)initWithCaptionAudioSourceType:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)handleTap;

@end
