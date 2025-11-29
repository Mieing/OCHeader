@class NSString, NSHTTPURLResponse, NSDictionary, NSData, NSError, UASocket, NSURLRequest;

@interface UAHTTPOperation : NSOperation <UASocketDelegate, UANetworkOperation> {
    BOOL _finished;
}

@property (retain, nonatomic) UASocket *socket;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *body;
@property (retain, nonatomic) id responseSerializer;
@property (nonatomic) float systemVersion;
@property (retain, nonatomic) NSDictionary *schemeInfo;
@property (nonatomic) BOOL wifiwwanNetwork;
@property (nonatomic) BOOL useCellular;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *certData;
@property (copy, nonatomic) id /* block */ completion;

+ (Class)socketClass;

- (void)createConnectionToHost:(id)a0 port:(unsigned short)a1 ssl:(BOOL)a2;
- (void)dechunkedData:(id)a0;
- (void)serializeHTTPResponseMessage;
- (void)socket:(id)a0 didConnectThroughIPType:(id)a1;
- (void)socketDidWriteComplete:(id)a0;
- (void)socket:(id)a0 didReadData:(id)a1;
- (void)socket:(id)a0 didOccurError:(id)a1;
- (void)socket:(id)a0 shouldVerifyServerTrust:(struct __SecTrust { } *)a1 authResult:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)setFinished:(BOOL)a0;
- (void)startRequest;
- (void)finishTask;
- (id)requestData;
- (void)dealloc;
- (void)socketDidClose:(id)a0;
- (void)main;
- (void)cancel;
- (BOOL)isFinished;

@end
