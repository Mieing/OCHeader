@class NSString, UIImageView, UILabel, UIView, MusicSourceViewInfo;

@interface MusicAudioTypeButton : UIControl

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (nonatomic) struct CGSize { double width; double height; } verticalSeparatorSize;
@property (nonatomic) double verticalSeparatorPadding;
@property (nonatomic) double contentSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MusicSourceViewInfo *info;
@property (copy, nonatomic) NSString *hintLabelText;
@property (readonly, nonatomic) NSString *currentTitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setupDescriptionLabelAlpha;
- (void)showArrowViewOnHintLabelExpanded:(BOOL)a0;
- (BOOL)canShowHintLabelTextWithInfo:(id)a0;
- (void)setAudioType:(int)a0;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)decorateLabel:(id)a0;
- (BOOL)showHintLabel;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
