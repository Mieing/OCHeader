@class NSString;

@interface MJTemplateSessionOperation : NSObject

@property (copy, nonatomic) NSString *sessionKey;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long status;
@property (copy, nonatomic) id /* block */ statusChangedHandler;

- (id)initWithSessionKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)clearCompletionHandler;
- (void)_updateStatus:(long long)a0;
- (void)start;
- (void)didStop;
- (id)boundTemplateId;
- (void).cxx_destruct;

@end
