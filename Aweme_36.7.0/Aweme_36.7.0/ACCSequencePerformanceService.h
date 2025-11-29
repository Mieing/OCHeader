@class ACCRepositoryWorkspace;

@interface ACCSequencePerformanceService : NSObject

@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (nonatomic) long long limitValue;

- (void)checkNLEActiveCountAndUploadExceptionIfNeed;
- (void)p_checkNLEActiveCountAndUploadExceptionIfNeed;
- (void)uploadUserExceptionWithActiveCount:(long long)a0;
- (void).cxx_destruct;

@end
