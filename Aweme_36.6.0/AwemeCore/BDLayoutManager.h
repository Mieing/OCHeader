@class BDParserManager, NSString, NSObject, BDRPriorityQueue;
@protocol OS_dispatch_queue, BDLayoutManagerDelegate, BDReaderLayoutOperationProtocol;

@interface BDLayoutManager : NSObject <BDRPriorityQueueDelegate, BDReaderLayoutOperationDelegate>

@property (weak, nonatomic) BDParserManager *parserMgr;
@property (retain, nonatomic) BDRPriorityQueue *priorityQueue;
@property (retain, nonatomic) id<BDReaderLayoutOperationProtocol> currentLayoutOperation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (weak, nonatomic) id<BDLayoutManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkLayoutOperation;
- (id)createLayoutOperationWithReaderModel:(id)a0 chapterInfo:(id)a1 chapterContent:(id)a2 priority:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)addLayoutOperation:(id)a0;
- (id)createPartialRelayoutOperationWithReaderModel:(id)a0 chapterInfo:(id)a1 chapterData:(id)a2 pageIndex:(unsigned long long)a3 priority:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)callbackOperation:(id)a0 data:(id)a1;
- (void)priorityQueue:(id)a0 didDisCardObject:(id)a1;
- (BOOL)layoutOperation:(id)a0 didFinishLayoutPage:(id)a1 chapterData:(id)a2;
- (void)cancelAllOperation;
- (id)initWithParserManager:(id)a0;
- (void)asyncLayoutChapterDataWithReaderModel:(id)a0 chapterInfo:(id)a1 chapterContent:(id)a2 priority:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)relayoutChapterDataWithReaderModel:(id)a0 chapterInfo:(id)a1 chapterData:(id)a2 pageIndex:(unsigned long long)a3 priority:(unsigned long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
