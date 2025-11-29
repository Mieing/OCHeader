@class NSString, NSArray;

@interface AWEIMChatSnapShotModelForPresenter : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *secPeerID;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) long long type;
@property (nonatomic) double updateDate;
@property (nonatomic) BOOL stickOnTop;
@property (nonatomic) long long unreadCount;
@property (nonatomic) BOOL mute;
@property (retain, nonatomic) NSArray *presenters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatModel:(id)a0 presenters:(id)a1;
- (id)transfromToChatModel;
- (void).cxx_destruct;

@end
