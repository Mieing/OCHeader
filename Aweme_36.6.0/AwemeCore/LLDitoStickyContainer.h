@class NSString, NSMutableArray, UIView;

@interface LLDitoStickyContainer : UIView <LLDitoComponentStickyContainerProtocol>

@property (retain, nonatomic) UIView *stickyView;
@property (retain, nonatomic) NSMutableArray *stickedModelsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickyViewToContainer:(id)a0;
- (void)unStickyViewFromContainer:(id)a0;
- (id)stickedComponentViewModel;
- (void)stickyStoreModel:(id)a0;
- (void)unstickStoreModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
