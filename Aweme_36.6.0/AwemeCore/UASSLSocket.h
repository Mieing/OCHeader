@class UABSDSocket, NSMutableData, NSString;

@interface UASSLSocket : UABufferSocket <UASocketDelegate>

@property (nonatomic) struct SSLContext { } *sslContext;
@property (nonatomic) BOOL finishedHandshake;
@property (retain, nonatomic) UABSDSocket *bsdSocket;
@property (retain, nonatomic) NSMutableData *sslWritableData;
@property (retain, nonatomic) NSMutableData *sslReadableData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearBuffer:(id)a0 withLength:(unsigned long long)a1;
+ (void)clearBuffer:(id)a0;

- (void)socket:(id)a0 didConnectThroughIPType:(id)a1;
- (void)socketDidWriteComplete:(id)a0;
- (void)socket:(id)a0 didReadData:(id)a1;
- (void)socket:(id)a0 didOccurError:(id)a1;
- (void)setWifiwwanNetwork:(BOOL)a0;
- (id)initWithHost:(id)a0 port:(id)a1;
- (BOOL)wifiwwanNetwork;
- (void)clearAllBuffers;
- (BOOL)isSSLContextValidate;
- (void)sslHandshakeThroughIPType:(id)a0;
- (void)sslErrorWithStatus:(int)a0 mark:(id)a1;
- (void)readData;
- (void).cxx_destruct;
- (void)disconnect;
- (void)writeData:(id)a0;
- (void)connect;
- (BOOL)useCellular;
- (void)dealloc;
- (void)socketDidClose:(id)a0;
- (void)setUseCellular:(BOOL)a0;

@end
