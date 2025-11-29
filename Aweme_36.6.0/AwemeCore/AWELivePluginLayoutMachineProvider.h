@class NSMapTable, IESLiveRightBottomManager, NSString, IESLiveCombineSubject;
@protocol HTSLiveLayoutSceneProtocol;

@interface AWELivePluginLayoutMachineProvider : NSObject <HTSLivePluginLayoutMachineProvider>

@property (retain, nonatomic) IESLiveRightBottomManager *rightBottomManager;
@property (retain, nonatomic) IESLiveCombineSubject *rightBottomItemSubject;
@property (retain, nonatomic) NSMapTable *viewTable;
@property (retain, nonatomic) id<HTSLiveLayoutSceneProtocol> layoutScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideRightBottomViewWithItem:(id)a0 processResult:(id /* block */)a1;
- (void)showRightBottomViewWithItem:(id)a0 processResult:(id /* block */)a1;
- (id)initWithContainer:(id)a0 isAnchor:(BOOL)a1 diContext:(id)a2;
- (void)addView:(id)a0 withLayoutType:(id)a1;
- (id)viewOfType:(id)a0;
- (id)visibleViewsOfTypes:(id)a0;
- (void)layoutPluginIfNeed;
- (void)removeContainers;
- (id)currentRightBottomItem;
- (BOOL)isExplainCardShowing;
- (void)showComponentsIfNeed;
- (void)hideComponentsIfNeed;
- (id)currentRightBottomCombineSubject;
- (void)showNextRightBottomItemInQueue;
- (void)hideCurrentRightBottomItem;
- (void)showRightBottomComponents;
- (void)hideRightBottomComponents;
- (void)registerBottomItemSubject;
- (void)setScene:(id)a0;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)removeView:(id)a0;
- (void)addView:(id)a0;
- (unsigned long long)getScene;

@end
