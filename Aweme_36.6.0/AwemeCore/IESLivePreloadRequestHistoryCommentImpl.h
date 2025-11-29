@interface IESLivePreloadRequestHistoryCommentImpl : IESLiveBackendRequestBaseImpl

@property (nonatomic) BOOL dynamicLoadMoreHistoryMessageOpened;
@property (nonatomic) long long numberOfLoadMoreHistoryMessage;
@property (nonatomic) BOOL hasHandledStrategy;

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (BOOL)pbParserWithOutBody;
- (id)historyMessageDynamicLoadStrategy;
- (id)publicScreenHistoryCommentLoadStrategyDefaultFactor;
- (void)handleHistoryCommentLoadStrategy;
- (id)init;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
