@class NSString;
@protocol UASocketDelegate;

@interface UASocket : NSObject {
    BOOL _confirmDidConnect;
    BOOL _confirmDidWrite;
    BOOL _confirmDidRead;
    BOOL _confirmDidError;
    BOOL _confirmDidClose;
    BOOL _confirmShouldVerify;
}

@property (nonatomic) BOOL useCellular;
@property (nonatomic) BOOL wifiwwanNetwork;
@property (weak, nonatomic) id<UASocketDelegate> socketDelegate;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *port;

+ (id)errorInDomain:(id)a0 code:(long long)a1 description:(id)a2;
+ (id)socketWithHost:(id)a0 port:(id)a1;
+ (id)errorInClass:(Class)a0 code:(long long)a1 description:(id)a2;

- (void)socketDelegateShouldVerifyTrust:(struct __SecTrust { } *)a0 authResult:(id /* block */)a1;
- (id)initWithHost:(id)a0 port:(id)a1;
- (void)socketDelegateDidConnectToIPType:(id)a0;
- (void)socketDelegateDidOccurError:(id)a0;
- (void)socketDelegateDidWriteData:(id)a0;
- (void)socketDelegateDidClose;
- (void)socketDelegateDidReadData:(id)a0;
- (void)readData;
- (void).cxx_destruct;
- (void)disconnect;
- (void)writeData:(id)a0;
- (void)connect;
- (void)dealloc;
- (id)errorWithCode:(long long)a0 description:(id)a1;

@end
