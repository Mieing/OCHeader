@class RxScheduler, NSString;

@interface AWEIMGroupChatPanelController : HTSService <AWEIMGroupChatPanelController>

@property (readonly, copy, nonatomic) RxScheduler *scheduler;
@property (readonly, copy, nonatomic) id /* block */ asyncSend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updateStateWithAction:(id)a0;
- (void)__run:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)performRequest:(id)a0;

@end
