@class NSString, UIImageView, UILabel, AWEIMTaskNetErrorRetryButton;

@interface AWEIMTaskNetErrorView : UIView <AWEIMNetErrorViewProtocol>

@property (retain, nonatomic) UIImageView *netErrorImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEIMTaskNetErrorRetryButton *retryButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
