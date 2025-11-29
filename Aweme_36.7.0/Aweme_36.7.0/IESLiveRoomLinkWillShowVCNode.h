@class IESLiveRoomLinkPushOrReplaceVCTask, IESLiveRoomLinkWillShowVCParam, NSString;

@interface IESLiveRoomLinkWillShowVCNode : IESLiveLinkNode <IESLiveRoomLinkWillShowVCNodeProtocol>

@property (retain, nonatomic) IESLiveRoomLinkWillShowVCParam *enterParam;
@property (retain, nonatomic) IESLiveRoomLinkPushOrReplaceVCTask *pushTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContextParam:(id)a0;
- (void)invokeAllTask;
- (void)clearRoomEnter:(BOOL)a0 cancel:(BOOL)a1 clearOnGoingRoomAisle:(BOOL)a2;
- (id)needToReplacedCurrentVCWithRoomAisle:(id)a0;
- (id)showVCWithRoomAisle:(id)a0;
- (id)getAudienceVCWithRoomAisle:(id)a0;
- (id)getSlideVCWithRoomAisle:(id)a0;
- (id)getOnGoingRoomAisle;
- (void).cxx_destruct;
- (void)clearWithError:(id)a0;

@end
