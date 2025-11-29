@class NSString, NSMutableDictionary, MMKV;

@interface AWETimeManagementBubbleManager : NSObject <AWEUserMessage, AWETimeManagementBubbleManagerProtocol>

@property (copy, nonatomic) NSString *bubbleRecordMapKey;
@property (retain, nonatomic) NSMutableDictionary *bubbleRecordMap;
@property (nonatomic) BOOL cacheBubbleReachTimes;
@property (nonatomic) BOOL cacheBubbleClicked;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)bubbleTitle;
- (void)reloadBubbleRecord;
- (void)trackBubbleShow;
- (void)trackBubbleClick;
- (BOOL)shouldShowBubble;
- (void)recordBubbleShowed;
- (void)recordBubbleClicked;
- (id)currentBubbleRecord;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)setup;

@end
