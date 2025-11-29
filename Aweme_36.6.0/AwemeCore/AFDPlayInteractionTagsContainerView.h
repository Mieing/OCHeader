@class NSArray, AWEPlayInteractionTagsContainerLabelView, NSTimer, NSString;

@interface AFDPlayInteractionTagsContainerView : UIView <AFDPlayInteractionTagsContainerViewProtocol>

@property (copy, nonatomic) NSArray *relationLabels;
@property (retain, nonatomic) AWEPlayInteractionTagsContainerLabelView *firstLabelView;
@property (retain, nonatomic) AWEPlayInteractionTagsContainerLabelView *secondLabelView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long showingIndex;
@property (nonatomic) BOOL shouldShowNextCurrentLabel;
@property (nonatomic) BOOL hasInitLabel;
@property (copy, nonatomic) id /* block */ clickCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isShowingOnlyOneLabel;
- (void)p_updateInterationLables;
- (void)p_startMarqueeAnimation;
- (void)p_resetLabelPosition;
- (void)p_updateFeedRelationLabelWith:(id)a0;
- (id)currentShowingRelationLabel;
- (void)clickContainerView:(id)a0;
- (void)configWithRelationLabel:(id)a0 withComplection:(id /* block */)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;

@end
