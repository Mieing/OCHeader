@class NSString;

@interface WCMomentsModifyShareScopeExposureReport : NSObject

@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) unsigned long long exposureScene;
@property (nonatomic) BOOL didClickModifyShareScope;

+ (void)doReportWithDataItem:(id)a0 exposureScene:(unsigned long long)a1 didClickModifyShareScope:(BOOL)a2;
+ (void)doReportWithDataItem:(id)a0 presentingVC:(id)a1 didClickModifyShareScope:(BOOL)a2;

- (void)report;
- (id)generateReoprtString;
- (void).cxx_destruct;

@end
