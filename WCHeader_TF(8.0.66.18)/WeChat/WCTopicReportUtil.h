@class NSString, WCTopicReportSessionInputItem;

@interface WCTopicReportUtil : MMUserService <WCFacadeExt, MMServiceProtocol>

@property (copy, nonatomic) NSString *timelineTopicActionSessionId;
@property (readonly, nonatomic) WCTopicReportSessionInputItem *reportSessionInputItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportTopicSearchVCAction:(long long)a0 actionSourceType:(long long)a1 reportItem:(id)a2;
+ (void)reportTopicSearchVCAction:(long long)a0 actionSourceType:(long long)a1 dismissReason:(long long)a2 reportItem:(id)a3;
+ (void)reportTopicSearchShareAction:(long long)a0 resultType:(long long)a1 query:(id)a2 reportItem:(id)a3;
+ (void)reportTopicTagClick:(id)a0 reportItem:(id)a1;
+ (void)reportTopicTipClick:(id)a0;
+ (id)topicReportFeedItemWithDataItem:(id)a0;
+ (void)reportWCFeedTopicInputAction:(long long)a0 reportItem:(id)a1;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetData;
- (void)reportCurrentSessionInputItem;
- (id)genKvReportItem21174;
- (void)genNewWCTopicActionSessionId;
- (void)genNewWCTopicActionSessionIdWithPrefix:(id)a0;
- (id)requestWCTopicActionSessionId;
- (void)onSnsNewCommitFinished:(id)a0 task:(id)a1;
- (void)onCommentReturn:(id)a0 comment:(id)a1;
- (void)onAdvertiseCommentReturn:(id)a0 comment:(id)a1;
- (void)reportWCFeedCommentSendFinish:(id)a0 comment:(id)a1;
- (void).cxx_destruct;

@end
