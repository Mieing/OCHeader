@interface IESLiveRoomMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy

- (id)buildData;
- (long long)buildingMode;
- (BOOL)filterWithParams:(id)a0;
- (id)roomMessage;
- (BOOL)filter;

@end
