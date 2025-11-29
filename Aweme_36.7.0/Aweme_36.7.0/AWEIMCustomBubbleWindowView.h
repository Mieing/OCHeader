@class AWEBubble, NSString;
@protocol IESIMCustomBubbleWindowViewDelegate;

@interface AWEIMCustomBubbleWindowView : UIView <IESIMCustomBubbleWindowViewProtocol>

@property (retain, nonatomic) AWEBubble *bubbleView;
@property (weak, nonatomic) id<IESIMCustomBubbleWindowViewDelegate> delegate;
@property (nonatomic) BOOL isDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showBubbleWithContent:(id)a0 onView:(id)a1 fromAnchor:(struct CGPoint { double x0; double x1; })a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 cornerAdjustment:(struct CGPoint { double x0; double x1; })a4 fixedSize:(struct CGSize { double x0; double x1; })a5 inDirection:(unsigned long long)a6 isDarkBackGround:(BOOL)a7 numberOfLines:(long long)a8 completion:(id /* block */)a9 withAnimation:(id /* block */)a10;
+ (id)showBubbleWithCustomView:(id)a0 onView:(id)a1 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 fromAnchor:(struct CGPoint { double x0; double x1; })a3 anchorAdjustment:(struct CGPoint { double x0; double x1; })a4 cornerAdjustment:(struct CGPoint { double x0; double x1; })a5 inDirection:(unsigned long long)a6 isDarkBackGround:(BOOL)a7 completion:(id /* block */)a8 withAnimation:(id /* block */)a9;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
