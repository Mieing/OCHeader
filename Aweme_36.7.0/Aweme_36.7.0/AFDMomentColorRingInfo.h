@class NSString, NSURL, AWEAwemeModel, AWELocalMomentNotesInfo;
@protocol AFDSkylightStory25BubbleInfoProtocol;

@interface AFDMomentColorRingInfo : NSObject <AFDMomentColorRingInfoProtocol>

@property (nonatomic) unsigned long long vmType;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *preferredName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *postTitle;
@property (retain, nonatomic) AWEAwemeModel *preloadItem;
@property (nonatomic) BOOL hasEverPressed;
@property (nonatomic) BOOL isNewPost;
@property (retain, nonatomic) AWELocalMomentNotesInfo *notesInfo;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL isTransitioning;
@property (nonatomic) BOOL canShowBubble;
@property (retain, nonatomic) id<AFDSkylightStory25BubbleInfoProtocol> bubbleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINDSAdapterClass;

- (BOOL)hasColorRing;
- (id)aAFDServiceDOUYINDSAdapter;
- (id)trackerExtraParams;
- (BOOL)isEqualToMomentColorInfo:(id)a0;
- (id)titleForDisplay;
- (BOOL)isLightStatus;
- (id)currentItemInfo;
- (BOOL)isCloseFriendsEntrance;
- (BOOL)canShowColorRing;
- (long long)currentStoryColorRingStatus;
- (long long)colorRingStatus;
- (long long)colorRingVisibleStatus;
- (BOOL)isDarkStatus;
- (BOOL)isCloseFriendsAvatar;
- (BOOL)canEnterOthersMomentFeed;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
