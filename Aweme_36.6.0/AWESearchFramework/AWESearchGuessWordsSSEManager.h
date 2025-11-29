@class NSString;
@protocol AWESearchAIGCSSERequestManagerProtocol;

@interface AWESearchGuessWordsSSEManager : NSObject <AWESearchAIGCSSERequestManagerDelegate>

@property (retain, nonatomic) id<AWESearchAIGCSSERequestManagerProtocol> manager;
@property (copy, nonatomic) id /* block */ inboxWordFinishBlock;
@property (copy, nonatomic) id /* block */ middleGuessWordFinishBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)SSERequestConfig;
+ (BOOL)enableSSERequest;
+ (long long)SSEGSDataValidTimeGap;
+ (long long)SSERequestTimeOutConfig;
+ (long long)SSERequestRetryTimes;

- (void)didReceiveAllData;
- (void)clearBeforeNewLink;
- (void)didReceiveCommonResponse:(id)a0;
- (void)didReceiveFirstDataChunk;
- (void)retryRequestWithRetryCount:(long long)a0;
- (void)didEndReadChunkForError:(id)a0 errorReason:(long long)a1 currentResponse:(id)a2;
- (void)didReceiveCommonJSON:(id)a0;
- (void)p_clearContext;
- (void)fetchGuessWordsWithParams:(id)a0 inboxWordFinish:(id /* block */)a1 middleGuessWordFinish:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
