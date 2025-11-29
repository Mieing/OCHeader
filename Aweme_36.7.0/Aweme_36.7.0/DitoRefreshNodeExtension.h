@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoRefreshNodeExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)refreshNodeWithNodeTag:(id)a0 nodeData:(id)a1;
- (void).cxx_destruct;

@end
