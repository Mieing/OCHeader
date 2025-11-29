@class IESLiveRoomLinkComponentLoadParam;

@interface IESLiveRoomLinkAllComponentLoadedNode : IESLiveLinkNode

@property (retain, nonatomic) IESLiveRoomLinkComponentLoadParam *nodeParam;

- (void)updateContextParam:(id)a0;
- (void)invokeAllTask;
- (void).cxx_destruct;

@end
