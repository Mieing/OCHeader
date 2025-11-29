@interface TingPlayerViewReportLogic : MMObject

+ (id)buildReportContextWithTingItem:(id)a0;
+ (id)buildPlayerReportContext;
+ (id)buildActionSingerIdAndActionSingerFinderUinArrWithTingItem:(id)a0;
+ (void)reportOpen3rdAppWithTingItem:(id)a0 fromSource:(id)a1 leaveClickOption:(unsigned long long)a2;

- (id)init;
- (void)onItemReload;

@end
