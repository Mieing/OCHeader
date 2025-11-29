@class IESLiveRoomLinkStartEnterParam;

@interface IESLiveRoomLinkStartEnterVerifyTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkStartEnterParam *enterParam;

- (void)updateContextParam:(id)a0;
- (void)generalCheckWithRoomAisle:(id)a0;
- (void)ecomCheckWithRoomAisle:(id)a0;
- (void)interactSmallWindowCheckWithRoomAisle:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
