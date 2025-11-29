@class UILabel, NSString, MMUIActivityIndicatorView;

@interface EmoticonLoadMoreFooterView : UIView

@property (retain, nonatomic) UILabel *customEmoticonSyncLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicator;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSString *loadingTip;
@property (nonatomic) unsigned long long direction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initCustomEmoticonSyncTipWithFrame;
- (void)layoutSubviews;
- (double)preferredDynamicLength;
- (void).cxx_destruct;

@end
