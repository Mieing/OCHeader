@class NSString, NSMutableSet, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLBodyDecorationExtension : NSObject <LLDitoExtensionProtocol>

@property (retain, nonatomic) NSMutableSet *visibleDecorationViews;
@property (retain, nonatomic) NSMutableSet *dequeueDecorationViewPool;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageDidScroll:(id)a0;
- (id)pageView;
- (void).cxx_destruct;

@end
