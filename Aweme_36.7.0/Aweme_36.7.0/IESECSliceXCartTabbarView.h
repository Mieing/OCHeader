@class NSArray, NSString, IESECSlidingTabbarView, IESECCartBubbleInfo;

@interface IESECSliceXCartTabbarView : IESECSliceXBaseContentElementView <IESECSlidingTabbarDelegate, IESECSlidingTabbarLayoutDelegate>

@property (retain, nonatomic) IESECSlidingTabbarView *tabBarView;
@property (retain, nonatomic) IESECCartBubbleInfo *activeBubbleInfo;
@property (retain, nonatomic) NSArray *tabList;
@property (copy, nonatomic) id /* block */ indexChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideBubble;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)tabbarDidFinishLayout;
- (double)slidingTabbarView:(id)a0 widthForSegment:(id)a1 atIndex:(unsigned long long)a2;
- (void)tabbarTappedAtIndex:(unsigned long long)a0;
- (void)setupTabbarStyleWithTabInfo:(id)a0 tabColor:(id)a1;
- (void)addBubbleIfNeededWithTabInfos:(id)a0;
- (long long)findSelectedTabIndex:(id)a0;
- (void)updateSelectedIndexWithAttrs:(id)a0;
- (void)triggerFieldInjection;
- (id)bubbleViewWithContent:(id)a0;
- (void)updateBubblePositionIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
