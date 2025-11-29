@class IESLiveBottomLeftEntryItem, IESLiveBottomLeftEntryContainerView, NSString, NSMutableArray;

@interface IESLiveBottomLeftEntryFragment : IESLiveRoomComponent <IESLiveBottomLeftEntryInterface>

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) IESLiveBottomLeftEntryContainerView *containerView;
@property (retain, nonatomic) IESLiveBottomLeftEntryItem *showingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)registerEntryItem:(id)a0;
- (void)showEntryIfNeeded;
- (BOOL)canShowEntry;
- (void).cxx_destruct;

@end
