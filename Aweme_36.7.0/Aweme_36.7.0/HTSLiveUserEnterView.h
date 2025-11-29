@class UIImageView, UILabel, NSMutableArray;

@interface HTSLiveUserEnterView : IESLivePrivilegeEntryView

@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *levelImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *starSuffix;
@property (retain, nonatomic) NSMutableArray *whiteShadowArray;
@property (retain, nonatomic) NSMutableArray *streamLineArray;
@property (nonatomic) unsigned long long enterClass;

- (void)touchViewDidTap;
- (void)startShowingAnimationOn:(id)a0 shouldReduceFPS:(BOOL)a1 stayTime:(double)a2;
- (void)updateWithEnterMessageNode:(id)a0;
- (id)createStreamLine:(double)a0;
- (id)createWhiteShadow;
- (void)addWhiteShadowAnimation:(id)a0 duration:(double)a1 delay:(double)a2;
- (void)addStreamLineAnimation:(id)a0 duration:(double)a1 delay:(double)a2 repeatCount:(long long)a3;
- (void)startWhiteShadowAnimation;
- (void)startStreamLineAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutUI;

@end
