@class NSString;

@interface WCStorySetting : MMObject <PBCoding>

@property (nonatomic) unsigned int canBubbleTipsShowedCount;
@property (nonatomic) BOOL hasClearCameraRedDot;
@property (nonatomic) unsigned int canCameraTipsShowedCount;
@property (nonatomic) BOOL hasShowCameraGuide;
@property (nonatomic) BOOL hasDragDownStoryTeachView;
@property (nonatomic) BOOL hasAutoPlayVideoFirst;
@property (nonatomic) unsigned int dragDownStoryProfileCount;
@property (nonatomic) BOOL hasTakePhotoAfterShowGuide;
@property (nonatomic) BOOL hasAlwaysShowFriendsStoryCellInTimeline;
@property (nonatomic) unsigned long long lastReadTimelineMaxTid;
@property (nonatomic) BOOL hasShowEntrance;
@property (nonatomic) BOOL hasClearAlbumRedDot;
@property (nonatomic) BOOL hasFirstPost;
@property (nonatomic) BOOL hasShowPrivateTips;
@property (nonatomic) BOOL friendVisitSwitchOn;
@property (nonatomic) unsigned int showTimelineTipsCount;
@property (nonatomic) BOOL hasShowCameraNewGuide;
@property (nonatomic) BOOL friendVisitUnreadCommentRedPointOn;
@property (nonatomic) BOOL hasReadFriendVisitVersionCameraRedPoint;
@property (nonatomic) BOOL newVersionFriendVisitSwitchOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_canBubbleTipsShowedCount;
+ (void)PBArrayAdd_hasClearCameraRedDot;
+ (void)PBArrayAdd_canCameraTipsShowedCount;
+ (void)PBArrayAdd_hasShowCameraGuide;
+ (void)PBArrayAdd_hasDragDownStoryTeachView;
+ (void)PBArrayAdd_hasAutoPlayVideoFirst;
+ (void)PBArrayAdd_dragDownStoryProfileCount;
+ (void)PBArrayAdd_hasTakePhotoAfterShowGuide;
+ (void)PBArrayAdd_hasAlwaysShowFriendsStoryCellInTimeline;
+ (void)PBArrayAdd_lastReadTimelineMaxTid;
+ (void)PBArrayAdd_hasShowEntrance;
+ (void)PBArrayAdd_hasClearAlbumRedDot;
+ (void)PBArrayAdd_hasFirstPost;
+ (void)PBArrayAdd_hasShowPrivateTips;
+ (void)PBArrayAdd_friendVisitSwitchOn;
+ (void)PBArrayAdd_showTimelineTipsCount;
+ (void)PBArrayAdd_hasShowCameraNewGuide;
+ (void)PBArrayAdd_friendVisitUnreadCommentRedPointOn;
+ (void)PBArrayAdd_hasReadFriendVisitVersionCameraRedPoint;
+ (void)PBArrayAdd_newVersionFriendVisitSwitchOn;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
