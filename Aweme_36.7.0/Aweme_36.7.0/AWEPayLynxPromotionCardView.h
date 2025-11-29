@class AWEYapLynxPromotionModel, NSString, UIView;
@protocol AnnieXContainerBaseProtocol;

@interface AWEPayLynxPromotionCardView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (retain, nonatomic) AWEYapLynxPromotionModel *lynxModel;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (id)initWithLynxModel:(id)a0;
- (void)p_initCardView;
- (void)loadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
