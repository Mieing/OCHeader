@class NSArray, NSString, IESLiveInteractionLayout;

@interface IESLiveMultiAudioChatCommonSlotLayout : NSObject <IESLiveMultiAudioChatSlotLayoutProtocol>

@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (nonatomic) double normalWidth;
@property (nonatomic) double enlargedWidth;
@property (readonly, nonatomic) int uilayout;
@property (retain, nonatomic) NSArray *slots;
@property (nonatomic) double ratio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (BOOL)isSquareLayout;
- (struct CGSize { double x0; double x1; })anchorAvatarSize;
- (struct CGSize { double x0; double x1; })audienceAvatarSize;
- (void)updateAudioChatLeft1V8SlotConstraint:(long long)a0;
- (void)calculateAvatarWidthIfNeeded;
- (void)makeAnchorSlotConstraint;
- (void)makeAudienceSlotsConstraint;
- (void)updateSlotViewsWithKeyboardShowing:(BOOL)a0;
- (id)audienceSlotViewForUser:(id)a0 inUserList:(id)a1;
- (id)anchorSlot;
- (BOOL)needShowGuideAnimationInAnchorSeatView;
- (BOOL)canChangePosition;
- (double)fanBGViewAlpha;
- (void)updateLayoutWithSubUILayout:(long long)a0;
- (void)updateInteractionLayout:(id)a0;
- (void).cxx_destruct;

@end
