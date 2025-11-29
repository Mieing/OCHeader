@class MMUIImageView, NSString, UITapGestureRecognizer, UIView, MMUILabel;
@protocol MMFinderLivePaymentTrialModeCellDelegate;

@interface MMFinderLivePaymentTrialModeCell : MMUIView

@property (weak, nonatomic) id<MMFinderLivePaymentTrialModeCellDelegate> delegate;
@property (retain, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) NSString *detailDescription;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long purchaseLivePreviewType;
@property (retain, nonatomic) MMUILabel *detailTitleLabel;
@property (retain, nonatomic) MMUILabel *detailDescriptionLabel;
@property (retain, nonatomic) MMUIImageView *selectStatusImageView;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 purchaseLivePreviewType:(long long)a1;
- (void)onTapped;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
