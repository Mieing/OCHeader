@class NSString, NSMutableArray;

@interface MMSafeModeReport : NSObject {
    NSString *m_path;
    NSMutableArray *m_reportList;
}

+ (id)sharedInstance;

- (id)init;
- (void)reportWithID:(int)a0 key:(int)a1 value:(int)a2;
- (void)reportWithID:(int)a0 ext:(id)a1 isReportNow:(BOOL)a2 isKeyLog:(BOOL)a3;
- (void)doReport;
- (void).cxx_destruct;

@end
