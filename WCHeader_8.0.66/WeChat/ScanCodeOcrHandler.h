@class NSMutableArray;

@interface ScanCodeOcrHandler : NSObject

@property (retain, nonatomic) NSMutableArray *m_reporterArray;

- (id)init;
- (BOOL)needCrashProtect:(id)a0;
- (void)handleOcr:(id)a0;
- (void).cxx_destruct;

@end
