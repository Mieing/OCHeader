@class NSMutableSet;

@interface BDWebViewBlankDetectMonitorMgr : NSObject

@property (retain, nonatomic) NSMutableSet *monitors;

+ (id)shareInstance;

- (void)addBlankDetectMonitorListener:(id)a0;
- (void)reportDetectResult:(id)a0 isBlank:(BOOL)a1 detectType:(long long)a2 detectImage:(id)a3 error:(id)a4 detectStartTime:(id)a5;
- (void).cxx_destruct;

@end
