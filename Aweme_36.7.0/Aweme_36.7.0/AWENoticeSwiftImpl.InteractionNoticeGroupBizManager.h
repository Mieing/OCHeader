@class NSArray;

@interface AWENoticeSwiftImpl.InteractionNoticeGroupBizManager : NSObject <AWEInteractNoticeGroupManagerProtocol, AWEUserMessage> {
    void /* unknown type, empty encoding */ innerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableFlame;
}

@property (nonatomic, readonly) NSArray *interactiveGroups;
@property (nonatomic, readonly) unsigned long long interactNoticeGroup;
@property (nonatomic, readonly) unsigned long long fansNoticeGroup;
@property (nonatomic, readonly) unsigned long long mateNoticeGroup;
@property (nonatomic, readonly) unsigned long long interactCommentNoticeGroup;
@property (nonatomic, readonly) unsigned long long diggNoticeGroup;
@property (nonatomic, readonly) unsigned long long commentNoticeGroup;
@property (nonatomic, readonly) unsigned long long atNoticeGroup;
@property (nonatomic, readonly) unsigned long long followNoticeGroup;
@property (nonatomic, readonly) unsigned long long ownPostedCommentNoticeGroup;
@property (nonatomic, readonly) unsigned long long ownPostedDanmakuNoticeGroup;
@property (nonatomic, readonly) unsigned long long rewardNoticeGroup;
@property (nonatomic, readonly) unsigned long long danmakuGroup;
@property (nonatomic, readonly) unsigned long long flameGroup;
@property (nonatomic, readonly) unsigned long long recommendNoticeGroup;
@property (nonatomic, readonly) unsigned long long otherNoticeGroup;
@property (nonatomic, readonly) unsigned long long groupApplyAllGroup;
@property (nonatomic, readonly) unsigned long long groupApplyingGroup;
@property (nonatomic, readonly) unsigned long long diggAndOtherGroup;

- (void)applyGroupInfosArray:(id)a0;
- (BOOL)isCachedGroup:(id)a0;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
