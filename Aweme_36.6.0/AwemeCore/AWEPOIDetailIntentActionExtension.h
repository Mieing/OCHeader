@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailIntentActionExtension : NSObject <DitoExtensionProtocol>

@property (nonatomic) BOOL hasTriggeredGoodsDetailNotification;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
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
