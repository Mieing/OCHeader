@class LLDitoContainerRouterParams;

@interface LLDitoContainerPageContext : LLDitoPageContext

@property (nonatomic) unsigned long long pageStatus;
@property (retain, nonatomic) LLDitoContainerRouterParams *routerParamsModel;

- (void).cxx_destruct;

@end
