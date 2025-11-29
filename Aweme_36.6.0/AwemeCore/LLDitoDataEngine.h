@class NSOperationQueue, LLDitoPageContext;
@protocol LLDitoCustomParserProtocol;

@interface LLDitoDataEngine : NSObject

@property (retain, nonatomic) NSOperationQueue *taskQueue;
@property (weak, nonatomic) id<LLDitoCustomParserProtocol> customParserImpl;
@property (weak, nonatomic) LLDitoPageContext *context;

- (void)syncParseData:(id)a0 buildVMBlock:(id /* block */)a1 completeBlock:(id /* block */)a2 exceptionBlock:(id /* block */)a3;
- (void)asyncParseData:(id)a0 buildVMBlock:(id /* block */)a1 completeBlock:(id /* block */)a2 exceptionBlock:(id /* block */)a3;
- (void)parseLoadMoreData:(id)a0 buildVMBlock:(id /* block */)a1 completeBlock:(id /* block */)a2 exceptionBlock:(id /* block */)a3;
- (void)clearNodeWithTag:(id)a0 atPageModel:(id)a1 completeBlock:(id /* block */)a2;
- (void)removeNodeWithTag:(id)a0 atPageModel:(id)a1 completeBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
