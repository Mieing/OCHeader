@interface IESLiveNotifyEffectMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy

- (long long)buildingMode;
- (void)AsyncBuildData:(id /* block */)a0;
- (BOOL)filterWithParams:(id)a0;
- (id)notifyEffectMsg;
- (BOOL)filter;

@end
