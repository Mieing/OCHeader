@class NSString;
@protocol IESIMFlowNodeProtocol;

@interface IESIMSendFakeMsgNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)sendFakeMessageWithInput:(id)a0;
- (void).cxx_destruct;
- (id)identifier;

@end
