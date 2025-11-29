@class NSString;
@protocol IESLiveDynamicWrdsRegisterService;

@interface IESLiveUnregisterWrdsMethodImpl : IESLiveUnregisterWrdsMethod

@property (copy, nonatomic) NSString *listenerId;
@property (weak, nonatomic) id<IESLiveDynamicWrdsRegisterService> dynamicWrdsRegisterService;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
