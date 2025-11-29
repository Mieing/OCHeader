@class NSString, LVAutoFillFrameService;

@interface ACCCutsameAutoFillFrameManager : NSObject <LVAutoFillFrameDelegate>

@property (retain, nonatomic) LVAutoFillFrameService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)containAutoFillFrameWithFragment:(id)a0 asset:(id)a1;
+ (void)updateFragmentWithNLETemplateModel:(id)a0 initTemplateModel:(id)a1;

- (void)templateAutoFillFrameOnProgress:(double)a0;
- (void)templateAutoFillFrameOnSuccess:(double)a0;
- (void)templateAutoFillFrameOnError:(id)a0;
- (void)processAutoFillFrameWithFragment:(id)a0 initialTemplateModel:(id)a1 draftFolder:(id)a2 currentAsset:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)cancelProcess;
- (void).cxx_destruct;

@end
