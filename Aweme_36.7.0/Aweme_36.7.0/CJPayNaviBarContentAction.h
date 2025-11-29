@class NSString, UIView;

@interface CJPayNaviBarContentAction : NSObject <CJPayNavigationBarActionProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) struct CGSize { double width; double height; } interactionSize;
@property (nonatomic) struct CGSize { double width; double height; } actionViewSize;
@property (nonatomic) double adjacentPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupActionParams;
- (void)p_clickAction;
- (id)initWithContentView:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithContentView:(id)a0;
- (id)actionView;

@end
