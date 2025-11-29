@class NSString, NSDictionary;

@interface WCFinderLiveReportCache : NSObject

@property (retain, nonatomic) NSString *sLastEnterRoomCommentScene;
@property (retain, nonatomic) NSString *sLastEnterRoomScenenote;
@property (nonatomic) long long sLastClickEnterIconType;
@property (retain, nonatomic) NSString *sLastClickCommentScene;
@property (nonatomic) unsigned long long sLastClickFeedIndex;
@property (retain, nonatomic) NSString *sLastClickFeedId;
@property (retain, nonatomic) NSString *sLastClickSessionBuffer;
@property (nonatomic) long long sLastShareClickType;
@property (retain, nonatomic) NSString *sLastShareUserName;
@property (retain, nonatomic) NSString *sLastShareTimelineFeedId;
@property (nonatomic) unsigned long long sLastEnterEntryScene;
@property (retain, nonatomic) NSString *sLastClickChannelExtra;
@property (retain, nonatomic) NSString *sLastRefPageId;
@property (copy, nonatomic) NSString *sLastEnterFromScene;
@property (copy, nonatomic) NSString *sOriginEnterFromScene;
@property (nonatomic) BOOL sIsFloat;
@property (nonatomic) long long sPageType;
@property (nonatomic) unsigned long long sEnterSessionId;
@property (copy, nonatomic) NSDictionary *sReportParamsDic;
@property (nonatomic) unsigned long long identityPrivacySettingFromSrc;
@property (nonatomic) unsigned long long identityPrivacySettingEnterTS;

+ (id)sharedReportCache;

- (id)getLastEnterRoomScenenote;
- (void)setLastEnterRoomScenenote:(id)a0;
- (id)getLastEnterRoomCommentScene;
- (void)setLastEnterRoomCommentScene:(id)a0;
- (long long)getLastClickEnterIconType;
- (void)setLastClickEnterIconType:(long long)a0;
- (id)getLastClickCommentScene;
- (void)setLastClickCommentScene:(id)a0;
- (id)getLastEnterFromScene;
- (id)getOriginEnterFromScene;
- (unsigned long long)getLastClickFeedIndex;
- (void)setLastClickFeedIndex:(unsigned long long)a0;
- (id)getLastClickFeedId;
- (void)setLastClickFeedId:(id)a0;
- (id)getLastClickSessionBuffer;
- (void)setLastClickSessionBuffer:(id)a0;
- (long long)getLastShareClickType;
- (void)setLastShareClickType:(long long)a0;
- (id)getLastShareUserName;
- (void)setLastShareUserName:(id)a0;
- (id)getLastShareTimelineFeedId;
- (void)setLastShareTimelineFeedId:(id)a0;
- (unsigned long long)getLastEnterEntryScene;
- (void)setLastEnterEntryScene:(unsigned long long)a0;
- (id)getLastClickChannelExtra;
- (void)setLastClickChannelExtra:(id)a0;
- (id)getLastRefPageId;
- (void)setLastRefPageId:(id)a0;
- (void)setIsFloat:(BOOL)a0;
- (BOOL)getIsFloat;
- (void)setLivePageType:(long long)a0;
- (long long)getLivePageType;
- (void)setEnterSessionId:(unsigned long long)a0;
- (unsigned long long)getEnterSessionId;
- (void)cleanCacheExitLive;
- (void)resetEnterFromScene;
- (void)resetLastClickChannelExtra;
- (void)setReportParamsDic:(id)a0;
- (id)getReportParamsDic:(BOOL)a0;
- (BOOL)getIsLiveScroll;
- (unsigned long long)getLastIdentityPrivacySettingFromSrc;
- (void)setLastIdentityPrivacySettingFromSrc:(unsigned long long)a0;
- (unsigned long long)getLastIdentityPrivacySettingTS;
- (void)setLastIdentityPrivacySettingTS:(unsigned long long)a0;
- (void).cxx_destruct;

@end
