@class MMUIImageView, MMUIActivityIndicatorView, NSString, MMWebImageView, UIView, MMUILabel;

@interface WCFinderTemplateChooseCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *customImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *customLoadingView;
@property (retain, nonatomic) MMUILabel *templateNameLabel;
@property (retain, nonatomic) MMUIImageView *blankTemplateImgView;
@property (retain, nonatomic) UIView *backGroundBorderView;
@property (nonatomic) BOOL showBoarder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellID;
+ (struct CGSize { double x0; double x1; })cellSize;
+ (double)kCellWidth;
+ (id)genTipsLabel;
+ (double)kTipsH;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)reLayoutViews;
- (void)layoutSubviews;
- (void)updateWithOMJTemplateInfo:(id)a0;
- (void)updateWithMJTemplateInfo:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
