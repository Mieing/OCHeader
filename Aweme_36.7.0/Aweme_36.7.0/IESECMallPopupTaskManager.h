@class IESECMallPopupTaskContainer, NSMapTable, NSMutableDictionary;

@interface IESECMallPopupTaskManager : NSObject

@property (retain, nonatomic) NSMapTable *bubbleTable;
@property (retain, nonatomic) IESECMallPopupTaskContainer *containerView;
@property (retain, nonatomic) NSMutableDictionary *popupGroup;
@property (retain, nonatomic) NSMapTable *popupTable;

+ (id)getUnqiueID;

- (id)defaultGroup;
- (void)dismissPopupView:(id)a0;
- (void)dismissBubbleView:(id)a0;
- (void)bubbleView:(id)a0 resetVisibility:(BOOL)a1;
- (void)dismissAllPopup;
- (id)addPopupTaskWithTaskConfig:(id)a0 delegate:(id)a1;
- (id)currentVisiblePopupViews;
- (id)currentVisibleBubbles;
- (void)removeAllBubbles;
- (void)bubbleView:(id)a0 updateLynxData:(id)a1;
- (id)showBubbleWithAnchor:(id)a0 container:(id)a1 params:(id)a2 delegate:(id)a3;
- (id)initWithRootContainer:(id)a0;
- (void)removeAllBubblesInMallRefresh;
- (void)dismissAllEmptyHolderPopup;
- (id)getAllPopupGroup;
- (void)setupPopupTaskContainer:(id)a0;
- (long long)allVisibleBubblesCount;
- (void)removeAllCollisionBubbles:(id)a0 at:(id)a1 anchorView:(id)a2;
- (id)layoutInfoFromParams:(id)a0;
- (id)bubbleViewWithUniqueId:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)executeTask:(id)a0;

@end
