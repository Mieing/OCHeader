@class NSTimer, NSString;
@protocol IESIMFlowNodeProtocol;

@interface AWEIMAttachmentTranscodeNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) NSTimer *timeoutTimer;
@property BOOL isVENotTranscoding;
@property BOOL didCallBack;
@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)callBackCompletion:(id /* block */)a0 output:(id)a1 error:(id)a2;
- (void)p_reportTranscodeFinish:(id)a0;
- (void)transcodeTimeout:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)identifier;
- (void)dealloc;

@end
