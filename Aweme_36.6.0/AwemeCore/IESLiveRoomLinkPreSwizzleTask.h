@class IESLiveRoomLinkWillEnterParam;

@interface IESLiveRoomLinkPreSwizzleTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkWillEnterParam *enterParam;

- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
