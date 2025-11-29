@class ACCEditCompileSession;

@interface AWEMediaDownloadForceRemuxStage : AWEMediaDownloadBaseStage

@property (retain, nonatomic) ACCEditCompileSession *transcoder;

- (void)p_trascoder;
- (void).cxx_destruct;
- (void)run;
- (void)cancel;

@end
