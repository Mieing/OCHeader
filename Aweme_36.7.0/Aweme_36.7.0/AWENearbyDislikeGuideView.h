@class LOTAnimationView, AWEAwemeModel, UIView;

@interface AWENearbyDislikeGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *longPressGuideAnimationView;
@property (nonatomic) BOOL inDismiss;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ didLongPressBlock;

- (void)p_setupUIWithView:(id)a0;
- (void)p_tap:(id)a0;
- (void)p_longPress:(id)a0;
- (id)initWithModel:(id)a0 inView:(id)a1;
- (void)p_setupUIWithView_old:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;

@end
