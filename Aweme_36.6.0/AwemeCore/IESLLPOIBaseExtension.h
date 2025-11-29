@class NSString, IESLLPOIDetailNGPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLPOIBaseExtension : NSObject <LLDitoExtensionProtocol, IESLLPOIDetailRequestParamsProviderProtocol>

@property (weak, nonatomic) IESLLPOIDetailNGPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly, copy, nonatomic) NSString *bizCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void).cxx_destruct;

@end
