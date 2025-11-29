@class NSString;
@protocol AFDABCloneService, AFDTrackerService, AFDWidgetsService, AFDLiveService, AFDRecommendToFriendService, AFDLongPressService, AFDContentConsumeSwiftService, AFDShareToStoryService, AFDStoryPlayInteractionService, AFDGeneralRedButtonManageService, AFDBizUISwiftService, AFDAudioService, AFDAmbassadorFactory, AFDPureModePageService;

@interface AWEFriendsService : HTSService <AWEFriendsService>

@property (readonly, nonatomic) id<AFDTrackerService> tracker;
@property (readonly, nonatomic) id<AFDPureModePageService> pureModePageService;
@property (readonly, nonatomic) id<AFDLiveService> live;
@property (readonly, nonatomic) id<AFDRecommendToFriendService> recommendToFriend;
@property (readonly, nonatomic) id<AFDShareToStoryService> shareToStory;
@property (readonly, nonatomic) id<AFDStoryPlayInteractionService> storyPlayInteraction;
@property (readonly, nonatomic) id<AFDWidgetsService> widgets;
@property (readonly, nonatomic) id<AFDAmbassadorFactory> ambassadorFactory;
@property (readonly, nonatomic) id<AFDLongPressService> longPress;
@property (readonly, nonatomic) id<AFDABCloneService> clone;
@property (readonly, nonatomic) id<AFDAudioService> audio;
@property (readonly, nonatomic) id<AFDContentConsumeSwiftService> contentConsume;
@property (readonly, nonatomic) id<AFDBizUISwiftService> bizUI;
@property (readonly, nonatomic) id<AFDGeneralRedButtonManageService> generalRedButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
