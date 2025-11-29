@class UIView;
@protocol BDXViewContainerProtocol;

@interface BDUGLuckyRouterViewModel : NSObject

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (copy, nonatomic) id /* block */ loadBlock;
@property (copy, nonatomic) id /* block */ viewAppearBlock;
@property (copy, nonatomic) id /* block */ viewDisappearBlock;

- (void).cxx_destruct;

@end
