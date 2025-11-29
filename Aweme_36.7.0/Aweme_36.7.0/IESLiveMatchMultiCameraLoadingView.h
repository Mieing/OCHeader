@class UILabel, UIView, IESLiveWebpLoadingView;

@interface IESLiveMatchMultiCameraLoadingView : UIView

@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (retain, nonatomic) UILabel *toastLabel;
@property (retain, nonatomic) UIView *playerBackgroundView;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
