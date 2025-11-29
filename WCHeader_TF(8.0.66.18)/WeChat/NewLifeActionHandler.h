@class NSString, NewLifePlugin;

@interface NewLifeActionHandler : NSObject

@property (retain, nonatomic) NSString *commandId;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *handlerId;
@property (nonatomic, getter=isRunning) BOOL running;
@property (weak, nonatomic) NewLifePlugin *plugin;

+ (id)generateHandlerIdForCommand:(id)a0;

- (id)initWithCommandId:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)handleRequest:(id)a0;
- (void)endActionWithError:(id)a0;
- (void)endActionWithResponse:(id)a0;
- (void)endActionWithEmptyResponse;
- (BOOL)isEqualToHandler:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
