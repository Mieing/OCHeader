@class AWERLVirtualView, NSString;

@interface AWEWorkCellFullMaskLayerViewComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualView *virtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (void)updateMaskState;
- (void)configureMask;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;

@end
