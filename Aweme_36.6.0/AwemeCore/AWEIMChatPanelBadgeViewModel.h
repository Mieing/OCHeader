@class AWEIMChatPanelBadgeRecord, AWEIMPlatformChatPanelBadgeModel, NSString;
@protocol IESIMThrottleDebounceAction;

@interface AWEIMChatPanelBadgeViewModel : NSObject

@property (nonatomic) BOOL isPanelVisible;
@property (nonatomic) BOOL isEntryVisible;
@property (nonatomic) BOOL isBadgeVisible;
@property (nonatomic) unsigned long long entryType;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> throttle;
@property (retain, nonatomic) AWEIMChatPanelBadgeRecord *record;
@property (retain, nonatomic) AWEIMPlatformChatPanelBadgeModel *badgeModel;
@property (copy, nonatomic) NSString *badgeTitle;
@property (readonly, nonatomic) BOOL shouldShowBadge;
@property (copy, nonatomic) id /* block */ refreshAction;

- (void)onClick;
- (id)badgeRecordKey;
- (void)p_mergeLocalRecordAndBadgeModel;
- (void)p_checkExitConditions;
- (void)p_exposureCheck;
- (void)p_asyncSaveRecord;
- (id)initWithBadgeModel:(id)a0 entryType:(unsigned long long)a1;
- (void)onEntryStatusChanged:(BOOL)a0;
- (void)onPanelStatusChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
