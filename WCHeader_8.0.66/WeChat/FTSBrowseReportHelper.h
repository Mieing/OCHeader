@interface FTSBrowseReportHelper : NSObject

@property (nonatomic) unsigned long long browseStartTime;
@property (nonatomic) BOOL isValid;

- (void)reset;
- (unsigned long long)genTimeInMs;
- (id)addLogParams:(id)a0;

@end
