@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoPrefetchImageExtension : NSObject <LLDitoExtensionProtocol>

@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseNodesDataWithNodesData:(id)a0 rule:(id)a1;
- (id)valueForJSONKeyPathWithKeyPath:(id)a0 json:(id)a1;
- (void)preloadImageWithImgPath:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;

@end
