@class NSString;
@protocol IESIMFlowNodeProtocol;

@interface IESIMSendMsgUploadNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)p_uploadFileWithModel:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)identifier;

@end
