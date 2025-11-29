@class UIColor, NSArray, NSDictionary, UIView, NSMutableArray;
@protocol IESLivePlaybackDanmakuPopupMenuDelegate;

@interface IESLivePlaybackDanmakuPopupMenu : UIView

@property (copy, nonatomic) NSDictionary *userInfo;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) double height;
@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;
@property (nonatomic) double arrowSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } popupMenuInsets;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSMutableArray *separators;
@property (nonatomic) unsigned long long realArrowDirection;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (retain, nonatomic) UIColor *popupColor;
@property (weak, nonatomic) id<IESLivePlaybackDanmakuPopupMenuDelegate> delegate;
@property (copy, nonatomic) NSArray *menuItems;
@property (nonatomic) unsigned long long arrowDirection;
@property (weak, nonatomic) UIView *hitTransferView;

+ (id)danmakuPopupMenu;

- (id)popupImage;
- (void)layoutItemViews;
- (void)layoutSeparatorLines;
- (void)calculateArrowPointAndMenuFrameWithTartgetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetView:(id)a1;
- (void)showMenuFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (void)createItemViews;
- (void)createSeparatorLines;
- (void)arrowPath:(struct CGPath { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 arrowPoint:(struct CGPoint { double x0; double x1; })a2 arrowSize:(double)a3 arrowUp:(BOOL)a4;
- (void)bodyPath:(struct CGPath { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadius:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)hideMenu;
- (void)showMenuFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
