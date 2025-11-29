@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoGeneralContainerManagerExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (id)generalContext;
- (void).cxx_destruct;

@end
