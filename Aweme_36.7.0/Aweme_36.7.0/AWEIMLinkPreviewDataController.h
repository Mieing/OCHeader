@class AWEIMMessageConversation, AWEIMMessage, NSDictionary, NSTimer, AWEIMMessageViewModel, AWEIMLinkPreviewInfo, NSString;
@protocol IESIMHttpTask;

@interface AWEIMLinkPreviewDataController : NSObject

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) AWEIMMessageViewModel *viewModel;
@property (retain, nonatomic) AWEIMLinkPreviewInfo *localPreviewInfo;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (retain, nonatomic) NSTimer *fetchUrlInfoTimer;
@property (nonatomic) BOOL isRetrying;
@property (copy, nonatomic) NSString *requestKey;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) id<IESIMHttpTask> requestTask;

- (void)updateViewModel:(id)a0;
- (BOOL)needUpdateForVersion;
- (void)requestGetPreviewInfoIfNeedForKey:(id)a0;
- (void)requestRefreshPreviewInfoIfNeedIsForce:(BOOL)a0;
- (void)p_cancelFetchTimerFrom:(id)a0;
- (void)p_delayFetchUrlInfoIfNeedFrom:(id)a0;
- (BOOL)p_needRequestWithFrequencyControl;
- (BOOL)p_enableFixUrlEncoding;
- (void)p_tryFetchUrlInfo;
- (void)markPreivewInfoUpdateTimeWithNeedClear:(BOOL)a0;
- (id)initWithMessageViewModel:(id)a0;
- (void)requestGetPreviewInfoIfNeed_Old;
- (BOOL)hasValidPreviewInfo;
- (void).cxx_destruct;
- (void)dealloc;

@end
