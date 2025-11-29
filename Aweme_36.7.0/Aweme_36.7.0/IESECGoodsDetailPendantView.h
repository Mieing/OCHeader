@class IESECLLDCLynxManager;

@interface IESECGoodsDetailPendantView : UIView

@property (weak, nonatomic) IESECLLDCLynxManager *manager;

+ (void)setupPendantFrame:(id)a0 pendantView:(id)a1 superView:(id)a2;

- (id)initWithPendantInfo:(id)a0 lynxManager:(id)a1;
- (void)setupWithPendantInfo:(id)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
