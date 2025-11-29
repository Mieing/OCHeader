@class UIImageView, UILabel, UIView;
@protocol LSIMCardLoadingViewDelegate, LSIMLoadingCircleViewProtocol;

@interface LSIMCardLoadingView : UIView

@property (retain, nonatomic) UIView<LSIMLoadingCircleViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *failedView;
@property (retain, nonatomic) UIImageView *failedImageView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (nonatomic) BOOL isFailed;
@property (weak, nonatomic) id<LSIMCardLoadingViewDelegate> delegate;

- (void)changeLabelTextToLoading:(BOOL)a0;
- (void)infoLabelDidTapped;
- (void)stopLoadingWithHidden;
- (void)showFailedView;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)setupView;

@end
