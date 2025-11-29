@class XNetInferenceSession, NSObject;
@protocol OS_dispatch_queue;

@interface EnhanceTranslatingUtil : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *detectorsQueue;
@property (retain, nonatomic) XNetInferenceSession *xnetSession;

- (id)init;
- (id)modelPath;
- (id)modelCachePath;
- (void)checkModelUpdate;
- (void)loadModel;
- (void)releaseModel;
- (BOOL)checkModelExist;
- (void)detectDocumentArea:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sessionId:(unsigned long long)a2;
- (void)callBack:(unsigned long long)a0 vetrices:(id)a1 docImg:(id)a2 originImg:(id)a3;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void).cxx_destruct;

@end
