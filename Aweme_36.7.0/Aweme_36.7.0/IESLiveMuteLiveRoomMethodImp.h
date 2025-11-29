@interface IESLiveMuteLiveRoomMethodImp : IESLiveMuteLiveRoomMethod

@property (nonatomic) BOOL setMuteValue;
@property (nonatomic) BOOL setStopLivePlay;
@property (nonatomic) BOOL setLongMute;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;

@end
