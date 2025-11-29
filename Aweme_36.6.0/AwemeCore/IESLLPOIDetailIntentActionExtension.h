@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLPOIDetailIntentActionExtension : NSObject <LLDitoExtensionProtocol>

@property (nonatomic) BOOL hasTriggeredGoodsDetailNotification;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)notifyIntentActionForType:(unsigned long long)a0;
- (void)handleGoodDetailExitNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
