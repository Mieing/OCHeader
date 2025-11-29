@class NSString, NSMutableSet, WCCommentContentCgiHelper, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCCommentRequestQueueManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (retain, nonatomic) WCCommentContentCgiHelper *currentCgiHelper;
@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) NSMutableSet *requestSnsEmojiInfoObjSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedQueue;

- (id)init;
- (void)enqueueCommentRequests:(id)a0;
- (void)enqueueSingleCommentRequest:(id)a0;
- (BOOL)isRequestingSnsEmojiInfoObjWithMd5:(id)a0;
- (void)addMd5ToRequestSnsEmojiInfoObjSet:(id)a0;
- (void)removeMd5FromRequestSnsEmojiInfoObjSet:(id)a0;
- (void)processNextBatch;
- (void)updateCommentInfoWithContentResults:(id)a0;
- (void)_safeOperate:(id /* block */)a0;
- (void).cxx_destruct;

@end
