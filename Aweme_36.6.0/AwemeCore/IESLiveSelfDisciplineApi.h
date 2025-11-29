@class NSNumber;

@interface IESLiveSelfDisciplineApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;

- (void)getSelfDisciplineSettingInfoWithSecUserID:(id)a0 callback:(id /* block */)a1;
- (void)setSelfDisciplineConfigWithSwitchStatus:(int)a0 target:(id)a1 callback:(id /* block */)a2;
- (void)setConfigWithStatus:(int)a0 topic:(id)a1 duration:(long long)a2 callback:(id /* block */)a3;
- (void)sendSignal:(int)a0;
- (void)getPunchInfo:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
