@class NSString;

@interface FaceRecogPayViewController : FaceRecogBaseViewController <MMUseCaseCallback>

@property (retain, nonatomic) NSString *errorMsg;
@property (nonatomic) BOOL canRetry;
@property (retain, nonatomic) NSString *otherVerifyTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)a0 errorTips:(id)a1 canRetry:(BOOL)a2;
- (void)startFaceCheckResultKindaUI:(id)a0;
- (void)call:(id)a0;
- (void)closeFaceCheckUseCaseCross;
- (void).cxx_destruct;

@end
