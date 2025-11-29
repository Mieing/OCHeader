@class AWERLVirtualView, NSString;

@interface AWEUserWorkCellDynamicLabelViewComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentTrackProtocol, AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualView *dynamicLabelViewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)trackParams;
- (void).cxx_destruct;

@end
