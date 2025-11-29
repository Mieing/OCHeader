@class UIView;
@protocol BDARVLiteWebViewProtocol;

@interface BDARVWebViewWrapperView : UIView

@property (retain, nonatomic) UIView<BDARVLiteWebViewProtocol> *innerWebViewGroup;

- (void)showWithModel:(id)a0;
- (void).cxx_destruct;

@end
