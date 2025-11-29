@class AWELiveRoomModel, NSString;
@protocol AWEIMShareModelProtocol;

@interface AWEIMShareLiveRoomMessageContext : AWEIMShareMessageContextBaseModel <AWEIMShareLiveRoomMessageContextProtocol>

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) AWELiveRoomModel *liveRoomModel;
@property (copy, nonatomic) NSString *postScriptText;
@property (nonatomic) BOOL shouldSendNoti;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
