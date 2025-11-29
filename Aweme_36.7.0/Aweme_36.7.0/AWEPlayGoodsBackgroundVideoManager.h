@class NSString, AWEPlayGoodsVideoInteractionView, UIView, AWEPlayGoodsBackgroundVideoViewController, UIViewController;

@interface AWEPlayGoodsBackgroundVideoManager : NSObject <AWEPlayGoodsBackgroundVideoManagerInterface>

@property (retain, nonatomic) AWEPlayGoodsBackgroundVideoViewController *goodsBackgroundVideoViewController;
@property (retain, nonatomic) AWEPlayGoodsVideoInteractionView *goodsVideoInteractionView;
@property (retain, nonatomic) UIView *shadowView;
@property (weak, nonatomic) UIViewController *feedCellViewController;
@property (weak, nonatomic) UIViewController *playVideoViewController;
@property (weak, nonatomic) UIViewController *interactionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
