@class UIView;
@protocol ACCLoadingViewProtocol;

@interface ACCHashtagStickerEditStateLoadingView : ACCHashtagEditStateBaseView

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingIndicator;

- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
