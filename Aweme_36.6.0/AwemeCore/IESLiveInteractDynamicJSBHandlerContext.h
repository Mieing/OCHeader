@class NSString, IESLiveInteractDynamicBizItem, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface IESLiveInteractDynamicJSBHandlerContext : NSObject <IESLiveInteractDynamicJSBHandlerResult>

@property (weak, nonatomic) IESLiveInteractDynamicBizItem *bizItem;
@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybirdContainer;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)success:(id)a0;
- (id)asyncCallback;
- (void).cxx_destruct;
- (id)error:(id)a0 code:(long long)a1;
- (id)error:(id)a0;

@end
