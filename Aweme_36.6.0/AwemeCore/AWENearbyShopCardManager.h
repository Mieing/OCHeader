@class AWENearbyShopCardBySyncMsgInfo, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface AWENearbyShopCardManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSMutableDictionary *triggerSceneDict;
@property (retain, nonatomic) NSMutableDictionary *inShopStatusDict;
@property (retain, nonatomic) NSMutableDictionary *shopCardExposeStatusDict;
@property (retain, nonatomic) AWENearbyShopCardBySyncMsgInfo *lastMsgInfo;
@property (nonatomic) long long lastMsgType;
@property (retain, nonatomic) AWENearbyShopCardBySyncMsgInfo *lastMallMsgInfo;
@property (nonatomic) double lastMallFresh;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)recordTriggerScene:(unsigned long long)a0 forLogId:(id)a1;
- (void)trackReqSettingsByWithMsgInfo:(id)a0 tirggerScene:(unsigned long long)a1 errMsg:(id)a2;
- (void)handleByteSyncBubbleData:(id)a0;
- (void)handleByteSyncMallCardMsg:(id)a0;
- (void)handleByteSyncShopCardMsg:(id)a0;
- (void)trackClientRCVDResultWithMsgInfo:(id)a0;
- (void)__trackRefreshSettingsWithMsgInfo:(id)a0 isFullScreen:(BOOL)a1 isRoam:(BOOL)a2 tirggerScene:(unsigned long long)a3 errMsg:(id)a4;
- (BOOL)hasShopCard;
- (void)handleByteSyncBubbleData:(id)a0 noticeType:(long long)a1 msgLogId:(id)a2 isFromPull:(BOOL)a3;
- (void)removeDotWhenOvertimeWithDotScene:(unsigned long long)a0;
- (BOOL)shouldMallGuideRefreshWithGuide:(id)a0;
- (id)shouldShowMallBubbleWithBubbleType:(long long)a0;
- (void)trackShopCardShowWithMsgInfo:(id)a0 url:(id)a1 success:(BOOL)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addObserver;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
