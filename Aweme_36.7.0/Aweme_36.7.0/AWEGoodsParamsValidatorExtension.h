@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEGoodsParamsValidatorExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
