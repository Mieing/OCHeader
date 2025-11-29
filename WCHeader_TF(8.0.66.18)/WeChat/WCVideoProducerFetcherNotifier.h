@interface WCVideoProducerFetcherNotifier : NSObject

@property (copy, nonatomic) id /* block */ creationCompletionBlock;
@property (copy, nonatomic) id /* block */ preprocCompletionBlock;

- (id)_init;
- (void)dealloc;
- (void)notifyCreationCompleteWithResult:(BOOL)a0;
- (void)notifyPreprocCompleteWithResult:(BOOL)a0 templateSession:(id)a1;
- (void).cxx_destruct;

@end
