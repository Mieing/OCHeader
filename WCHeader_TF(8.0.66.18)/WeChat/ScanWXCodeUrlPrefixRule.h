@class NSMutableArray;

@interface ScanWXCodeUrlPrefixRule : NSObject

@property (retain, nonatomic) NSMutableArray *handlerArray;

- (id)initWithDelegate:(id)a0 scene:(long long)a1 sourceType:(unsigned int)a2 sourceInfo:(id)a3;
- (BOOL)shouldHandleUrl:(id)a0;
- (BOOL)isUrlMatchPrefixRule:(id)a0 andTryGetCodeType:(char *)a1;
- (void)reportHandleCount;
- (void).cxx_destruct;

@end
