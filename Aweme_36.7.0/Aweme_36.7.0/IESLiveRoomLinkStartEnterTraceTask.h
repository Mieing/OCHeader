@class IESLiveRoomLinkStartEnterParam;

@interface IESLiveRoomLinkStartEnterTraceTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkStartEnterParam *enterParam;

- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
