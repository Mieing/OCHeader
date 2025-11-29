@class DitoGeneralContainerPageContext;

@interface AWEPOIDetailLynxContainerBuilder : DitoGeneralLynxContainerBuilder

@property (readonly, nonatomic) DitoGeneralContainerPageContext *detailPageContext;

- (id)getPreloadView:(id)a0;
- (id)lynxContainerWithVM:(id)a0 ditoNodeTag:(id)a1;
- (id)lynxContainerWithCubeModel:(id)a0 extraParams:(id)a1;

@end
