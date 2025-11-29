@interface WCDownloadEventHandler : ProtobufEventHandler

- (void)monitorReport:(id)a0 connectFail:(BOOL)a1 keyVector:(void *)a2;
- (void)monitorWebpPic:(BOOL)a0 keyVector:(void *)a1;
- (int)getIDReportSceneKeyOffset:(id)a0;
- (id)calMd5ForBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)logMd5WithRaw:(id)a0 rawLen:(unsigned long long)a1 decryptMd5:(id)a2 rgbaMd5:(id)a3 urlStr:(id)a4 decodeTips:(id)a5;
- (BOOL)decodeShouldLockForWidth:(int)a0 height:(int)a1;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolConnectFail:(id)a0;

@end
