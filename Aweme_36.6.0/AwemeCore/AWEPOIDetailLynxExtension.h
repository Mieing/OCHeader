@class DitoPageContext, DitoGeneralContainerPageContext, AWEPOIDetailLynxContainerBuilder, AWEPOIDetailConstData, NSString;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailLynxExtension : NSObject <DitoGeneralLynxContainerBusinessExtender, DitoTempoDataProviderProtocol, DitoExtensionProtocol>

@property (retain, nonatomic) AWEPOIDetailLynxContainerBuilder *lynxContainerBuilder;
@property (readonly, nonatomic) DitoGeneralContainerPageContext *detailPageContext;
@property (readonly, nonatomic) AWEPOIDetailConstData *constData;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
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
