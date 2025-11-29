@class UIView;
@protocol BDXLynxViewProtocol;

@interface BDXSeperateRenderContext : NSObject

@property (retain, nonatomic) UIView<BDXLynxViewProtocol> *lynxView;
@property (nonatomic) float rootHeight;

- (void).cxx_destruct;

@end
