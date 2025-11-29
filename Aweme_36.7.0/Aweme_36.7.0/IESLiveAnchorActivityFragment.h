@class HTSLiveToolbarItem, UIView;
@protocol IESLiveBubbleGuide;

@interface IESLiveAnchorActivityFragment : IESLiveRoomComponent

@property (retain, nonatomic) HTSLiveToolbarItem *item;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)p_createActivityItem;
- (void)showPrompts:(id)a0;
- (void)p_didClickActivityItem;
- (void)p_trackActivityCenterEntryWithActionType:(id)a0;
- (void).cxx_destruct;

@end
