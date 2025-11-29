@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEDitoChunkExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMergePageModel:(id)a0 update:(id)a1 result:(id)a2;
- (void)updateChunkFlag:(id)a0 update:(id)a1 result:(id)a2;
- (void).cxx_destruct;

@end
