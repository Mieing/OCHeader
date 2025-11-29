@class NSArray;
@protocol AWEInteractNoticeGroupManagerProtocol;

@interface AWEInteractNoticeGroupManager : NSObject

@property (class, readonly, copy, nonatomic) NSArray *interactiveGroups;
@property (class, readonly, nonatomic) unsigned long long interactNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long fansNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long mateNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long interactCommentNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long diggNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long commentNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long atNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long followNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long groupApplyAllGroup;
@property (class, readonly, nonatomic) unsigned long long groupApplyingGroup;
@property (class, readonly, nonatomic) unsigned long long diggAndOtherGroup;
@property (class, readonly, nonatomic) unsigned long long ownPostedCommentNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long ownPostedDanmakuNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long rewardNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long danmakuReceivedGroup;
@property (class, readonly, nonatomic) unsigned long long flameGroup;
@property (class, readonly, nonatomic) unsigned long long recommendNoticeGroup;
@property (class, readonly, nonatomic) unsigned long long otherNoticeGroup;

@property (retain, nonatomic) id<AWEInteractNoticeGroupManagerProtocol> manager;

+ (id)enableAtMeTitle;
+ (BOOL)isInvalidNoticeGroup:(long long)a0;
+ (BOOL)isInteractNoticeGroup:(long long)a0;
+ (void)assignGroupValueDictWithGroupInfoArray:(id)a0;
+ (unsigned long long)interactFlameNoticeGroup;
+ (BOOL)enablePostedDanmaku;
+ (id)sharedManager;

- (void)assignGroupValueDictWithGroupInfoArray:(id)a0;
- (void).cxx_destruct;

@end
