@class NSArray, NSString;

@interface IESLiveMultiAudioChatSquareSlotLayout : NSObject <IESLiveMultiAudioChatSlotLayoutProtocol>

@property (nonatomic) long long anchorSlotIndex;
@property (nonatomic) BOOL isInTeamFight;
@property (nonatomic) BOOL isTeamFightFlexible;
@property (readonly, nonatomic) int uilayout;
@property (retain, nonatomic) NSArray *slots;
@property (nonatomic) double ratio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)anchorTopOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (BOOL)isSquareLayout;
- (struct CGSize { double x0; double x1; })anchorAvatarSize;
- (struct CGSize { double x0; double x1; })audienceAvatarSize;
- (void)makeConstraintForTeamFight:(BOOL)a0 flexible:(BOOL)a1;
- (double)currentAdditionalTopOffset;
- (void)makeAnchorSlotConstraint;
- (void)makeAudienceSlotsConstraint;
- (void)updateSlotViewsWithKeyboardShowing:(BOOL)a0;
- (id)audienceSlotViewForUser:(id)a0 inUserList:(id)a1;
- (id)anchorSlot;
- (BOOL)needShowGuideAnimationInAnchorSeatView;
- (BOOL)canChangePosition;
- (double)fanBGViewAlpha;
- (void)updateAnchorPosition:(id)a0 guestList:(id)a1;
- (double)multiAudioSlotTop;
- (double)anchorTopOffsetKeyboardShowing;
- (void).cxx_destruct;

@end
