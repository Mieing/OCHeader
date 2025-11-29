@class MMUIActivityIndicatorView, UILabel, UIView, UITapGestureRecognizer;
@protocol EmoticonStoreMoreManualFetchFooterViewDelegate;

@interface EmoticonStoreMoreManualFetchFooterView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicator;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<EmoticonStoreMoreManualFetchFooterViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)setupGesture;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onTap;
- (void)forceTriggerTap;
- (void).cxx_destruct;

@end
