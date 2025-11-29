@class CJPayButton, UIImage, NSString;

@interface CJPayNaviBarImageAction : NSObject <CJPayNavigationBarActionProtocol>

@property (retain, nonatomic) CJPayButton *imageButton;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) struct CGSize { double width; double height; } interactionSize;
@property (nonatomic) struct CGSize { double width; double height; } actionViewSize;
@property (nonatomic) double adjacentPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageName:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 clickAction:(id /* block */)a2;
- (void)p_setupActionParams;
- (void)p_clickAction;
- (id)initWithImageName:(id)a0 clickAction:(id /* block */)a1;
- (void).cxx_destruct;
- (id)actionView;

@end
