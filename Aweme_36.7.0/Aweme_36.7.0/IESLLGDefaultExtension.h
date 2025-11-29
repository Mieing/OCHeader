@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLGDefaultExtension : NSObject <LLDitoExtensionProtocol>

@property (nonatomic) BOOL loadedOnCreate;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
