@class NSMutableArray;

@interface ScanQRCodeUrlPrefixRule : NSObject

@property (retain, nonatomic) NSMutableArray *m_handlerArray;

- (id)initWithDelegate:(id)a0 scene:(long long)a1 sourceType:(unsigned int)a2 sourceInfo:(id)a3;
- (BOOL)shouldHandleUrl:(id)a0;
- (BOOL)isUrlMatchPrefixRule:(id)a0 andTryGetCodeType:(char *)a1;
- (BOOL)isTransferUrl:(id)a0;
- (void)reportHandleCount;
- (void).cxx_destruct;

@end
