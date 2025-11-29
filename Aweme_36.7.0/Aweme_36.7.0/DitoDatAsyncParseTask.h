@class DitoDataParseTaskV2, NSDictionary, DitoPageModel, NSError;
@protocol DitoCustomParserProtocol;

@interface DitoDatAsyncParseTask : NSOperation

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id /* block */ buildVMBlock;
@property (copy, nonatomic) id /* block */ exceptionBlock;
@property (retain, nonatomic) DitoDataParseTaskV2 *syncTask;
@property (retain, nonatomic) DitoPageModel *pageModel;
@property (retain, nonatomic) NSError *resultError;
@property (weak, nonatomic) id<DitoCustomParserProtocol> customParserImpl;

- (id)initWithData:(id)a0 buildVMBlock:(id /* block */)a1 exceptionBlock:(id /* block */)a2;
- (void)finishAction:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)main;

@end
