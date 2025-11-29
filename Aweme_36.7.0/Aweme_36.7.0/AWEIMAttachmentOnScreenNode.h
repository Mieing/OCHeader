@class NSString;
@protocol IESIMFlowNodeProtocol;

@interface AWEIMAttachmentOnScreenNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)createUploadFileViewModelIfNeed:(id)a0;
- (void)p_updateMessageIDWithDBModelArray:(id)a0 index:(long long)a1 sendObj:(id)a2 messageID:(id)a3 con:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)identifier;

@end
