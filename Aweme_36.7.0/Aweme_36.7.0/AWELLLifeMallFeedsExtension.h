@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface AWELLLifeMallFeedsExtension : NSObject <LLDitoExtensionProtocol>

@property (copy, nonatomic) NSString *sessionID;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonRequestParamsFromSource:(id)a0 pageContext:(id)a1;

@end
