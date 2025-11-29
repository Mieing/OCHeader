@class IESLiveRoomLinkWillShowVCParam;

@interface IESLiveRoomWillShowVCControlTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkWillShowVCParam *enterParam;

- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
