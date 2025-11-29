@class BDASifContainerLifecycle;

@interface BDASifBaseViewController : BDXViewController

@property (retain, nonatomic) BDASifContainerLifecycle *sifLifecycle;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)schemaParams;
- (id)sifAdModel;
- (void)updateAdModel:(id)a0;
- (void)viewDidLoad;

@end
