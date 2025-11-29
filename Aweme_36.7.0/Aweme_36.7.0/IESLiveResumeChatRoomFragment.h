@class NSString, IESLiveCheckExistChatroomAPI;

@interface IESLiveResumeChatRoomFragment : IESLiveGuideComponent <IESLiveResumeChatRoomRouter>

@property (retain, nonatomic) IESLiveCheckExistChatroomAPI *api;
@property (nonatomic) BOOL isChecking;
@property (retain, nonatomic) id chatroomResumeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentUnmount;
- (BOOL)enableResumeWithRoom:(id)a0;
- (void)checkExistChatroomWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)monitorWithAPIPath:(id)a0 requestTime:(double)a1 response:(id)a2 error:(id)a3 extra:(id)a4;
- (void).cxx_destruct;

@end
