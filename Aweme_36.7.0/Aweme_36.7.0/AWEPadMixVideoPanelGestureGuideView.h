@class NSString, LOTAnimationView, UIPanGestureRecognizer, DUXBaseLabel;
@protocol AWEPadMixVideoPanelGestureGuideViewDelegate;

@interface AWEPadMixVideoPanelGestureGuideView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) DUXBaseLabel *tipLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (weak, nonatomic) id<AWEPadMixVideoPanelGestureGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadMixVideoPanelAdapterClass;

- (void)addGesture;
- (id)aAWEPadMixVideoPanelAdapter;
- (void)panAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToSuperview;
- (void)setupUI;

@end
