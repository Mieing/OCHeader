@class IESLiveRoomLinkDidEnterParam, NSString;

@interface IESLiveRoomLinkDidEnterNode : IESLiveLinkNode <IESLiveRoomLinkDidEnterNodeProtocol>

@property (retain, nonatomic) IESLiveRoomLinkDidEnterParam *enterParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContextParam:(id)a0;
- (void)invokeAllTask;
- (void)markApiDuration:(id)a0;
- (void)didEnterCompleteWithResult:(BOOL)a0;
- (void)_realInvokeAllTask;
- (id)getOnGoingRoomAisle;
- (void).cxx_destruct;

@end
