@class UIView;
@protocol AnnieXContainerBaseProtocol;

@interface IESECContentListLynxComponent : NSObject

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;

- (void)updateWithUrl:(id)a0 jsonDataStr:(id)a1 parentView:(id)a2 bizParams:(id)a3 extraParams:(id)a4;
- (void).cxx_destruct;

@end
