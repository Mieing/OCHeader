@class AWEIMLifeServiceChatMenuViewModel, NSArray, CAShapeLayer, UIView;
@protocol AWEIMLifeServiceChatMenuViewDelegate;

@interface AWEIMLifeServiceChatSubmenuView : UIView

@property (retain, nonatomic) AWEIMLifeServiceChatMenuViewModel *viewModel;
@property (copy, nonatomic) NSArray *modelArray;
@property (copy, nonatomic) NSArray *itemArray;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIView *shadowContainerView;
@property (retain, nonatomic) CAShapeLayer *triangleLayer;
@property (weak, nonatomic) id<AWEIMLifeServiceChatMenuViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double trigleHeight;

+ (id)drawTriangleLayerWithWidth:(double)a0 height:(double)a1;

- (id)initWithModelArray:(id)a0;
- (void)__setupUI;
- (void)updateTriangleWithMiddleX:(double)a0;
- (void)__subMenuItemButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
