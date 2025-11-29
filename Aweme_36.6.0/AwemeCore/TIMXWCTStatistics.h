@class NSDictionary;

@interface TIMXWCTStatistics : NSObject

@property (nonatomic) int currentTopID;
@property (retain) NSDictionary *processers;

+ (id)sharedInstance;

- (BOOL)removeWCDBGlobalErrorReportProcesserWithID:(int)a0;
- (int)addWCDBGlobalErrorReportProcesser:(id /* block */)a0;
- (void)p_setGlobalErrorReport;
- (void).cxx_destruct;
- (id)init;

@end
