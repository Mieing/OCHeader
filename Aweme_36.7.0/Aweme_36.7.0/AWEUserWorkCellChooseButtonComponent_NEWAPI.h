@class AWERLVirtualButton, NSString;

@interface AWEUserWorkCellChooseButtonComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellChooseButtonProtocol, AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualButton *chooseButtonVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)chooseButton;
- (BOOL)dynamicComponent;
- (void)setImageWithButton:(id)a0;
- (void)chooseButtonClick;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;

@end
