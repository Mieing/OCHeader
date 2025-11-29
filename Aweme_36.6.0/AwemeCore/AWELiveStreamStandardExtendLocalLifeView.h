@class UIView, UIImageView, AWELivePreviewExtendArea;

@interface AWELiveStreamStandardExtendLocalLifeView : UIView

@property (retain, nonatomic) AWELivePreviewExtendArea *currentExtendArea;
@property (nonatomic) double offset;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *midPartsView;
@property (retain, nonatomic) UIView *bottomPartsView;
@property (retain, nonatomic) UIView *toIconContainerView;
@property (retain, nonatomic) UIImageView *toIconImageView;
@property (retain, nonatomic) UIView *toMidPartsView;
@property (retain, nonatomic) UIView *toBottomParasView;

- (void)updateSubviewsWithExtendArea:(id)a0 withOffset:(double)a1;
- (void)startAnimationWithExtendArea:(id)a0 trackBlock:(id /* block */)a1;
- (double)viewHeightWithExtendArea:(id)a0;
- (double)iconContainerBottomOffsetWithExtendArea:(id)a0;
- (double)iconContainerSizeWHWithExtendArea:(id)a0;
- (double)iconSizeWHWithExtendArea:(id)a0;
- (double)partViewOffsetIconContainerWithExtendArea:(id)a0;
- (BOOL)isInExplainedWithExtendArea:(id)a0;
- (double)iconCornerRadiusWithExtendArea:(id)a0 isContainer:(BOOL)a1;
- (unsigned long long)lifeExpandTypeWithExtendArea:(id)a0;
- (id)iconBackgroundColorWithExtendArea:(id)a0;
- (long long)iconViewContentModeWithExtendArea:(id)a0;
- (void)loadImageWithImageView:(id)a0 imageURLList:(id)a1;
- (id)createPartsView:(id)a0 fontWeight:(long long)a1 height:(double)a2 iconSizeWH:(double)a3;
- (void)animationInExplainedWithExtendArea:(id)a0;
- (void)animationOneWithExtendArea:(id)a0 to:(BOOL)a1;
- (void)animationThreeWithExtendArea:(id)a0 to:(BOOL)a1;
- (void)animationFourWithExtendArea:(id)a0 to:(BOOL)a1;
- (void)animationNotInExplainedWithExtendArea:(id)a0;
- (void)createSubviewsWithToExtendArea:(id)a0 to:(BOOL)a1;
- (void)updateSubviewsWithToExtendArea:(id)a0;
- (BOOL)needCornerRadiusWithExtendArea:(id)a0;
- (unsigned long long)lifeExplainTypeWithExtendArea:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
