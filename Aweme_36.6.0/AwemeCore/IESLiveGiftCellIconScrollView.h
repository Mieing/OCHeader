@class IESLiveRoomGiftItemCellContext, IESLiveGiftCellIconView, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLiveGiftCellIconScrollView : UIView

@property (retain, nonatomic) IESLiveGiftCellIconView *middleView;
@property (retain, nonatomic) IESLiveGiftCellIconView *theOtherView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } middleViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightViewFrame;
@property (nonatomic) BOOL initFirstDisplay;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *scrollSemaphore;
@property (nonatomic) BOOL hasShownBefore;
@property (retain, nonatomic) IESLiveRoomGiftItemCellContext *context;
@property (copy, nonatomic) id /* block */ getItemblock;

- (void)cancelAllAnimations;
- (void)setupUI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getGiftItemWithIndex:(long long)a0;
- (void)animatedSelectFromIndex:(long long)a0 toIndex:(long long)a1 scrollLeft:(BOOL)a2;
- (void)prepareFromIndex:(long long)a0 toIndex:(long long)a1 scrollLeft:(BOOL)a2;
- (void)selectIndexPrepare:(long long)a0;
- (void)selectIndex:(long long)a0 withAnimated:(BOOL)a1;
- (void)actionOnHidden;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;

@end
