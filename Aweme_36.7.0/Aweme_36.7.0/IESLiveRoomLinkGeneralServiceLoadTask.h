@class IESLiveRoomLinkDidEnterParam;

@interface IESLiveRoomLinkGeneralServiceLoadTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkDidEnterParam *enterParam;

- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
