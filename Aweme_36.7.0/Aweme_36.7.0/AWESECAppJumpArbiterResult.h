@class NSString;

@interface AWESECAppJumpArbiterResult : AWESECAppJumpBasicCheckResult

@property (copy, nonatomic) NSString *secResultAction;
@property (nonatomic) BOOL isShowMiddlePage;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) unsigned long long stackSampleRate;

- (long long)secResultActionCode;
- (void).cxx_destruct;
- (id)init;

@end
