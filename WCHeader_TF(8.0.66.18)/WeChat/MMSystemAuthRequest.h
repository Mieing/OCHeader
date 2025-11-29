@class NSString, MMSystemAuthCancellableToken;

@interface MMSystemAuthRequest : NSObject

@property (nonatomic) unsigned int capability;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned int authStatus;
@property (nonatomic) BOOL weChatAuthorized;
@property (nonatomic) BOOL weChatRejected;
@property (nonatomic) BOOL weChatIgnored;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) NSString *identifierKey;
@property (retain, nonatomic) MMSystemAuthCancellableToken *cancellableToken;

- (void)reportWithAction:(unsigned long long)a0;
- (BOOL)shouldCacheRejectSelection;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
