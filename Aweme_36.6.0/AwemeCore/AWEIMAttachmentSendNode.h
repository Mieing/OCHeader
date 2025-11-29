@class NSString;
@protocol IESIMFlowNodeProtocol;

@interface AWEIMAttachmentSendNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)p_uploadErrorContentLog:(id)a0 logID:(id)a1;
- (void).cxx_destruct;
- (id)identifier;

@end
