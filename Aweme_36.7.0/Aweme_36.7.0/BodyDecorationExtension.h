@class NSString, NSMutableSet, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface BodyDecorationExtension : NSObject <DitoExtensionProtocol>

@property (retain, nonatomic) NSMutableSet *visibleDecorationViews;
@property (retain, nonatomic) NSMutableSet *dequeueDecorationViewPool;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageDidScroll:(id)a0;
- (id)pageView;
- (void).cxx_destruct;

@end
