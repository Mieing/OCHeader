@class NSString, UIImageView, UIView, YYLabel;

@interface AWEECOMIMCardComponentFailedView : UIView <AWEECOMIMCardComponentFailedViewProtocol, BDECRabbiFlyIErrorView>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) YYLabel *tipLabel;
@property (copy, nonatomic) id /* block */ onClickRetryBlock;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapRetry;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
