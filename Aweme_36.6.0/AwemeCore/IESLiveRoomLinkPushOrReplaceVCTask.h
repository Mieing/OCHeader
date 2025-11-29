@class IESLiveRoomLinkWillShowVCParam;
@protocol IESLiveRoomLinkWillShowVCNodeProtocol;

@interface IESLiveRoomLinkPushOrReplaceVCTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkWillShowVCParam *enterParam;
@property (weak, nonatomic) id<IESLiveRoomLinkWillShowVCNodeProtocol> delegate;

- (void)updateContextParam:(id)a0;
- (void)clearRoomEnter:(BOOL)a0 cancel:(BOOL)a1 clearOnGoingRoomAisle:(BOOL)a2;
- (void)pushVCToWindow:(id)a0 roomAisle:(id)a1 needToReplacedVC:(id)a2 isDisableReplace:(BOOL)a3;
- (id)getOnGoingRoomAisle;
- (void)_realPushVCToWindow:(id)a0 roomAisle:(id)a1 needToReplacedVC:(id)a2 isDisableReplace:(BOOL)a3;
- (void).cxx_destruct;
- (void)run;
- (void)clearWithError:(id)a0;

@end
