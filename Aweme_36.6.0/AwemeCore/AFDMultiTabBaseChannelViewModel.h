@class NSString;

@interface AFDMultiTabBaseChannelViewModel : NSObject <AFDMultiTabChannelEventProtocol, AFDMultiTabBaseChannelViewModelProtocol>

@property (copy, nonatomic) NSString *channelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)contentVC;
- (BOOL)hasVCInited;
- (id)underTakeSkylightID;
- (void)channelSelectByChangeTabEventFrom:(id)a0;
- (void)channelLeaveByChangeTabEvent;
- (void)tabBarRepeatedTapEvent;
- (BOOL)canFeedRefreshByTabBarRepeatedTapEvent;
- (void)channelSelectEventFrom:(id)a0 enterMethod:(id)a1;
- (void)channelLeaveEventTo:(id)a0 enterMethod:(id)a1;
- (BOOL)canRefreshByChannelRepeatedTapEvent;
- (id)getSegmentItem;
- (BOOL)isFeed;
- (void)slidingViewControllerWillBeginDraggingEvent;
- (void)slidingViewControllerDidEndScrollEvent;
- (BOOL)isContentScrollViewInTop;
- (void)tabBarSelectFriendsTabEventFrom:(id)a0;
- (void)channelRepeatedTapEvent;
- (void)beforeChannelSwitchEventWithParams:(id)a0;
- (id)multiTabVC;
- (id)feedTabItemVC;
- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0;
- (long long)themeStyle;

@end
