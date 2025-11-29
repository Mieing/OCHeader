@class NSString, IESLiveRoomLinkStartEnterParam;

@interface IESLiveRoomLinkStartEnterNode : IESLiveLinkNode <IESLiveRoomLinkStartEnterProtocol>

@property (retain, nonatomic) IESLiveRoomLinkStartEnterParam *enterParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContextParam:(id)a0;
- (void)invokeAllTask;
- (void)showToastIfNeeded:(id)a0;
- (id)onGoingRoomAisle;
- (void)clearRoomEnter:(BOOL)a0 cancel:(BOOL)a1 clearOnGoingRoomAisle:(BOOL)a2;
- (unsigned long long)shouldCreateNewEnterRoomProcess:(id)a0 showVCBlock:(id /* block */)a1;
- (unsigned long long)roomAisleLegal:(id)a0 showVCBlock:(id /* block */)a1;
- (unsigned long long)shouldeNewEnterRoomProcess:(id)a0;
- (BOOL)vcCannotSupportRoom:(id)a0;
- (void)filterWithErrorCode:(unsigned long long)a0;
- (void)roomIsolateIfNeeded;
- (void).cxx_destruct;

@end
