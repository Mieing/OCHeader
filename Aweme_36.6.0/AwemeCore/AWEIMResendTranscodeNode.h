@class NSString, AWEIMVideoTransCoder;
@protocol IESIMFlowNodeProtocol;

@interface AWEIMResendTranscodeNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) AWEIMVideoTransCoder *transcoder;
@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)p_reportTranscodeFinish:(id)a0;
- (void)p_transcodeWithFileIDArray:(id)a0 content:(id)a1 input:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;

@end
