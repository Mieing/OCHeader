@class UILabel, UIView;
@protocol ACCLoadingViewProtocol;

@interface AWEStickerPickerFootView : MJRefreshAutoFooter

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loading;
@property (retain, nonatomic) UILabel *stateLabel;
@property (nonatomic) struct CGPoint { double x; double y; } elementsOffset;

- (void)placeSubviews;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)stateLabelClick;
- (void)endRefreshingWithNetWorkError;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
