@interface MatrixReportStrategy : NSObject

@property (nonatomic) unsigned long long reportNetType;
@property (nonatomic) unsigned long long maxDailyUploadCnt;
@property (nonatomic) float sampleRatio;
@property (nonatomic) BOOL vipStrategy;
@property (nonatomic) unsigned long long timeoutSecond;

- (id)init;

@end
