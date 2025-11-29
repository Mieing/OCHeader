@class IESLiveRoomLinkDidEnterParam;

@interface IESLiveLinkDidEnterUpdateRoomTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkDidEnterParam *enterParam;

- (void)updateContextParam:(id)a0;
- (id)roomModelUpdate:(id)a0 withRoomAisle:(id)a1;
- (void).cxx_destruct;
- (void)run;

@end
