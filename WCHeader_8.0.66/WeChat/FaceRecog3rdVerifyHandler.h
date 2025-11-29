@class NSString, FaceRecogResultView;

@interface FaceRecog3rdVerifyHandler : FaceRecogInternelHandler <PBMessageObserverDelegate, FaceRecogBaseHandlerDelegate> {
    FaceRecogResultView *_prepareView;
}

@property (nonatomic) unsigned int sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startVerifyFor3rdParty:(id)a0 verifyInfo:(id)a1 needVideo:(BOOL)a2 feedbackUrl:(id)a3 businessTip:(id)a4 businessTipColor:(id)a5;
- (void)didUploadFaceData:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handle3rdVerifyResult:(id)a0;
- (void).cxx_destruct;

@end
