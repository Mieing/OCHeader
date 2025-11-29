@class LOTAnimationView, UILabel, UIView;

@interface AWETeenLongPressGuideManager : NSObject

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) LOTAnimationView *pressView;
@property (retain, nonatomic) UILabel *guidingLabel;
@property (nonatomic) BOOL isShowingGuide;
@property (copy, nonatomic) id /* block */ longPressBlock;

- (void)p_addGesture;
- (void)showLongPressGuide;
- (void)p_setupBind;
- (void)p_animationBegin;
- (void)dismissLongPressGuide;
- (void)swipeAction:(id)a0;
- (void)p_setupUI;
- (void)longPressAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)tapAction:(id)a0;

@end
