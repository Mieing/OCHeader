@class WCDataItem, NSMutableDictionary, NSString, WCAdDynamicFeedElementInfo, UIView, NSMutableArray;
@protocol WCAdDynamicLayoutLogicDelegate;

@interface WCAdDynamicLayoutLogic : WCAdvertiseOperationLogicBase <WCAdDynamicFeedEmptyLayoutViewDelegate, ILinkEventExt>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) UIView *dynamicLayoutView;
@property (retain, nonatomic) WCAdDynamicFeedElementInfo *latestClickedElementInfo;
@property (retain, nonatomic) NSMutableDictionary *animationInfos;
@property (retain, nonatomic) NSMutableDictionary *animationViews;
@property (nonatomic) BOOL didOnExposedAnimationsShow;
@property (retain, nonatomic) NSMutableArray *viewsWithClickIndex;
@property (nonatomic) BOOL didEnterBackground;
@property (weak, nonatomic) id<WCAdDynamicLayoutLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDynamicLayoutLogicWithDataItem:(id)a0 scene:(unsigned long long)a1;
+ (id)getDynamicLayoutLogicWithDataItem:(id)a0 scene:(unsigned long long)a1 reloadData:(BOOL)a2;
+ (void)tryToReloadDynamicInfoWithDataItem:(id)a0 scene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)dealloc;
- (void)addClickEventRecursivelyForView:(id)a0;
- (void)onButtonElementClicked:(id)a0;
- (id)fetchDynamicLayoutView;
- (double)fetchDynamicLayoutViewHeightForWidth:(double)a0;
- (void)onElementClickedWithInfo:(id)a0 viewTag:(long long)a1;
- (void)onElementClickedWithInfo:(id)a0 viewTag:(long long)a1 index:(unsigned long long)a2 originView:(id)a3;
- (unsigned int)fetchLatestTransitioningType;
- (void)onDynamicFeedLayoutClicked:(id)a0 viewTag:(long long)a1;
- (void)onDynamicFeedLayoutClicked:(id)a0 viewTag:(long long)a1 index:(unsigned long long)a2 originView:(id)a3;
- (void)onSearchTopicClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onSearchTopicLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLinkLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onPhoneLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)postExtraClickWithType:(long long)a0 url:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)postExtraClickWithType:(long long)a0 url:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 view:(id)a3;
- (void)appendAnimationableView:(id)a0 attachAnimations:(id)a1;
- (void)startAnimationsWithEventType:(id)a0;
- (void)contentItemBecomeInvisible;
- (void)applyAnimation:(id)a0 toView:(id)a1;
- (void)applyCommonAnimation:(id)a0 toView:(id)a1;
- (void)delayApplyCommonAnimation:(id)a0;
- (BOOL)containTransitionProperty:(id)a0;
- (void)doAnimationWithTranslation:(id)a0;
- (void)applyCommonAnimationProperties:(id)a0 toView:(id)a1 isFromValue:(BOOL)a2;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformFromProperty:(id)a0 toView:(id)a1 isFromValue:(BOOL)a2;
- (id)copyViewFrom:(id)a0;
- (void)applySpecialAnimation:(id)a0 toView:(id)a1;
- (void)delaySpecialCommonAnimation:(id)a0;
- (void)applySpecialAnimationProperties:(id)a0 toView:(id)a1 isFromValue:(BOOL)a2;
- (void)resetAnimationsWithEventType:(id)a0;
- (void)resetAnimation:(id)a0 toView:(id)a1;
- (id)fetchValidProperties:(id)a0 isSpecial:(BOOL)a1;
- (id)fetchValidProperties:(id)a0 isSpecial:(BOOL)a1 containTranslate:(BOOL)a2;
- (unsigned long long)getAnimationOptionsForAnimation:(id)a0;
- (id)modeForAnimationObject:(id)a0;
- (void).cxx_destruct;

@end
