@class DitoContainerRouterParams;

@interface DitoContainerPageContext : DitoPageContext

@property (nonatomic) unsigned long long pageStatus;
@property (retain, nonatomic) DitoContainerRouterParams *routerParamsModel;

- (void).cxx_destruct;

@end
