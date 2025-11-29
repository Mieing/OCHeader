@class NSString, NSTimer, NSData, NSMutableData, JLAsyncSocket;

@interface JLSocket : NSObject <JLAsyncSocketDelegate> {
    NSData *recData;
    NSMutableData *rectmpData;
    int irecTmp;
    unsigned long long ulrecTmpLen;
    unsigned short connectFlag;
    short recvFlag;
}

@property (retain, nonatomic) JLAsyncSocket *socket;
@property (retain, nonatomic) NSTimer *connectTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (short)hexToIntValue:(char)a0;
- (int)connectToHost:(char *)a0 andPort:(int)a1;
- (void)myClosesocket;
- (int)mySend:(char *)a0 andLen:(int)a1;
- (id)myRecv;
- (id)hexStringToBytes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)socket:(id)a0 didConnectToHost:(id)a1 port:(unsigned short)a2;
- (void)socket:(id)a0 didReadData:(id)a1 withTag:(long long)a2;
- (void)socket:(id)a0 didWriteDataWithTag:(long long)a1;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;

@end
