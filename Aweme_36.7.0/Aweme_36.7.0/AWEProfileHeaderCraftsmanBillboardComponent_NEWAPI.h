@class AWEProfileCraftsmanBillboardButton, UIView, AWEProfileHeaderVirtualView;

@interface AWEProfileHeaderCraftsmanBillboardComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (retain, nonatomic) AWEProfileHeaderVirtualView *virtualView;
@property (retain, nonatomic) AWEProfileCraftsmanBillboardButton *button;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL hasTrackedShow;

- (id)buildVirtualView:(id)a0;
- (void)updateComponentData:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (BOOL)shouldShowArea;
- (void)configButton;
- (void).cxx_destruct;

@end
