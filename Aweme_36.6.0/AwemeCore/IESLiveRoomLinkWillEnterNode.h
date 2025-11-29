@class IESLiveRoomLinkWillEnterParam, NSString;

@interface IESLiveRoomLinkWillEnterNode : IESLiveLinkNode <IESLiveRoomLinkWillEnterProtocol>

@property (retain, nonatomic) IESLiveRoomLinkWillEnterParam *enterParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContextParam:(id)a0;
- (void)invokeAllTask;
- (void).cxx_destruct;

@end
