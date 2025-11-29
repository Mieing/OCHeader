@class UIImage, UIImageView, AWEAwemeModel, UILabel, UIView, AWEAdConversionAreaModel;

@interface AWEAdConversionAreaView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAdConversionAreaModel *buttonInfo;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandTitleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandContainerRect;
@property (nonatomic) BOOL enableLink;
@property (nonatomic) double suitableComponentSpace;
@property (retain, nonatomic) UIImage *customImage;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ updateAreaViewLayoutBlock;

- (void)removeAllSubviews;
- (void)setupSubviewsIfNeeded;
- (void)calculateFramesWithoutLink;
- (id)foldTitleFont;
- (double)calculateSuitableWidth;
- (id)expandedTitleFont;
- (void)expandWithoutLink;
- (id)expandedContainerBackgroundColor;
- (void)flashActionLabel;
- (id)foldContainerBackgroundColor;
- (id)labelClickType:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithAwemeModel:(id)a0 conversionModel:(id)a1;
- (void)expandWithAnimationConfig:(id)a0;
- (id)adExtraInfoWithClickPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })iconLeftBottomPosition;
- (double)iconLeftMargin;
- (struct CGSize { double x0; double x1; })iconSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)showIcon;
- (void)calculateFrames;

@end
