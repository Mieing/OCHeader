@class IESLiveAnchorTaskApi, NSString;

@interface IESLiveAnchorTaskFragment : IESLiveRoomComponent <IESLiveAnchorTaskRouter>

@property (retain, nonatomic) IESLiveAnchorTaskApi *taskApi;
@property (nonatomic) long long task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)finishTask:(long long)a0;
- (void)openPanelFromTask:(long long)a0;
- (void)closePanelFromTask:(long long)a0;
- (void).cxx_destruct;

@end
