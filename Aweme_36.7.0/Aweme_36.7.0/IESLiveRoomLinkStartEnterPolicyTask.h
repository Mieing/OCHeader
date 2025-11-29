@class IESLiveRoomLinkStartEnterParam;

@interface IESLiveRoomLinkStartEnterPolicyTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkStartEnterParam *enterParam;

- (void)updateContextParam:(id)a0;
- (BOOL)checkLiveEntranceWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (void)run;

@end
