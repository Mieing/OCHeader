@interface IESGCPGetXplayResolutionInfoMethodImpl : IESGCPGetXplayResolutionInfoMethod <IESGCPCGInstanceActions>

@property (copy, nonatomic) id /* block */ completion;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (id)_resultModelFromResolutionList:(id)a0 curResolution:(id)a1;
- (void).cxx_destruct;

@end
