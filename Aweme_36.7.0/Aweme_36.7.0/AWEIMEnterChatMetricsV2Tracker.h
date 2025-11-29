@class NSDictionary, NSMutableDictionary, AWEIMConversationContext;

@interface AWEIMEnterChatMetricsV2Tracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackTriggers;
@property (retain, nonatomic) NSMutableDictionary *monitors;
@property (retain, nonatomic) NSDictionary *metricsCategory;
@property (weak, nonatomic) AWEIMConversationContext *convContext;

- (long long)firstTimeDuration;
- (id)trackTriggersRecords;
- (void)markMessageListVCInitTime;
- (void)setMetricsCustomStats:(id)a0;
- (void)addEnterChatProcessMonitorObject:(id)a0;
- (BOOL)triggerUploadMetricsBy:(unsigned long long)a0;
- (void)startTrackTimeWithKey:(id)a0;
- (void)endTrackTimeWithKey:(id)a0;
- (BOOL)p_allTriggersFired;
- (id)p_collectMetrics;
- (void)fillLoadMessageLinkInfoWithDisplayTime:(long long)a0 params:(id)a1;
- (void)invalidateTrackSession;
- (void).cxx_destruct;
- (id)metrics;

@end
