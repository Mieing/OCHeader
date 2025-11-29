@class LLDitoPageModel, NSDictionary, LLDitoDataParseTaskV2, NSError;
@protocol LLDitoCustomParserProtocol;

@interface LLDitoDatAsyncParseTask : NSOperation

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id /* block */ buildVMBlock;
@property (copy, nonatomic) id /* block */ exceptionBlock;
@property (retain, nonatomic) LLDitoDataParseTaskV2 *syncTask;
@property (retain, nonatomic) LLDitoPageModel *pageModel;
@property (retain, nonatomic) NSError *resultError;
@property (weak, nonatomic) id<LLDitoCustomParserProtocol> customParserImpl;

- (id)initWithData:(id)a0 buildVMBlock:(id /* block */)a1 exceptionBlock:(id /* block */)a2;
- (void)finishAction:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)main;

@end
