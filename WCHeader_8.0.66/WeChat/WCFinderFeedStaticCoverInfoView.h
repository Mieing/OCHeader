@class UILabel, UIView, MMWebImageView;

@interface WCFinderFeedStaticCoverInfoView : UIView

@property (retain, nonatomic) MMWebImageView *rightIconWebImageView;
@property (retain, nonatomic) UILabel *rightInfoLabel;
@property (retain, nonatomic) UILabel *leftInfoLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *stickyTopContainerView;
@property (nonatomic) double maxWidth;

+ (struct CGSize { double x0; double x1; })getDefaultIconImageSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateContentWithLeftText:(id)a0 rightImage:(id)a1 rightText:(id)a2 isShowStickyTop:(BOOL)a3;
- (void)updateContentWithLeftText:(id)a0 rightImage:(id)a1 rightText:(id)a2 isShowStickyTop:(BOOL)a3 leftTextFont:(id)a4;
- (void)updateContentWithLeftText:(id)a0 rightImage:(id)a1 rightText:(id)a2 isShowStickyTop:(BOOL)a3 hiddenSeparateLine:(BOOL)a4;
- (void)updateContentWithLeftText:(id)a0 rightImageUrl:(id)a1 hiddenSeparateLine:(BOOL)a2 leftTextFont:(id)a3;
- (void)setTextColor:(id)a0;
- (void)setIconHidden:(BOOL)a0;
- (void)adjustMargin;
- (void)adjustMarginWithNoneIconLayout:(double)a0 iconLayout:(double)a1 iconLeftMargin:(double)a2 leftInfoLabelLeftMargin:(double)a3;
- (id)getRightIconImage;
- (id)getRightInfoLabelText;
- (id)getLeftInfoLabelText;
- (void).cxx_destruct;

@end
