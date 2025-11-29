@protocol MMFinderLiveSpringCardContainerViewDelegate;

@interface MMFinderLiveSpringCardContainerView : UIView

@property (weak, nonatomic) id<MMFinderLiveSpringCardContainerViewDelegate> delegate;

- (id)init;
- (void)setSecondaryView:(id)a0 atIndex:(unsigned long long)a1;
- (void)pushSecondaryView:(id)a0;
- (void)pushSecondaryView:(id)a0 animated:(BOOL)a1;
- (id)popSecondaryView;
- (void)dismissCurrentLotteryCard;
- (void)notifyViewDidAppearIfNeeded:(id)a0;
- (void)onLotteryCardWillCloseByCloseButton;
- (void).cxx_destruct;

@end
