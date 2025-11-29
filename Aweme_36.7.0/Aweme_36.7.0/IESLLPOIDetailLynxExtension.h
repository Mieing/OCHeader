@class IESLLPOIDetailConstData, IESLLPOIDetailLynxContainerBuilder, NSString, LLDitoPageContext, LLDitoGeneralContainerPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLPOIDetailLynxExtension : NSObject <LLDitoGeneralLynxContainerBusinessExtender, LLDitoTempoDataProviderProtocol, LLDitoExtensionProtocol>

@property (retain, nonatomic) IESLLPOIDetailLynxContainerBuilder *lynxContainerBuilder;
@property (readonly, nonatomic) LLDitoGeneralContainerPageContext *detailPageContext;
@property (readonly, nonatomic) IESLLPOIDetailConstData *constData;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (id)nativeExtraDataFor:(id)a0 withContext:(id)a1;
- (void)setupCubeModel:(id)a0;
- (id)extraParamsWithCubeModel:(id)a0 withContext:(id)a1;
- (void)bindBDXEvent:(id)a0;
- (id)extraDataFor:(id)a0 node:(id)a1;
- (void).cxx_destruct;

@end
