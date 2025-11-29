@class NSString;

@interface WAReportPackageReuseInfo : WAReportBaseItem

@property (copy, nonatomic) NSString *packageMd5;
@property (copy, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) unsigned long long reuseType;
@property (copy, nonatomic) NSString *reuseReason;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
