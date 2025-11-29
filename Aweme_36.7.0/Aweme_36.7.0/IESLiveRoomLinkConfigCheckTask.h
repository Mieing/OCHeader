@class IESLiveRoomLinkWillEnterParam;

@interface IESLiveRoomLinkConfigCheckTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkWillEnterParam *enterParam;

- (void)updateContextParam:(id)a0;
- (BOOL)p_isFromVSSportsOfEnterFrom:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
