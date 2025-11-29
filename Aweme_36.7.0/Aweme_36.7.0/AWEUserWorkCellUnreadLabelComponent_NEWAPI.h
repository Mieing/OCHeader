@class AWERLVirtualView, NSString, AWERLVirtualLabel;

@interface AWEUserWorkCellUnreadLabelComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellAlphaChangeProtocol, AWEUserWorkCellComponentProtocol>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } absoluteLayoutStyle;
@property (retain, nonatomic) AWERLVirtualView *childVirtualView;
@property (retain, nonatomic) AWERLVirtualLabel *unreadLabelVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (BOOL)dynamicComponent;
- (void)changeAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;

@end
