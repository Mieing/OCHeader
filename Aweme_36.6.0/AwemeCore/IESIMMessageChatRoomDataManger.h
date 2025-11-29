@class NSString, TIMXSDKInstance;
@protocol IESIMMessageChatRoomDataMangerDelegate;

@interface IESIMMessageChatRoomDataManger : NSObject <TIMXOMessagesChatRoomDataSourceDelegate, IESIMTIMXLifeMessage>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long currentIndex;
@property (retain) id dataSource;
@property (weak, nonatomic) id<IESIMMessageChatRoomDataMangerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (id)initWithConversationID:(id)a0 currentIndex:(long long)a1;
- (void)chatRoomDataSource:(id)a0 didReceiveMessages:(id)a1;
- (void)chatRoomDataSource:(id)a0 didReceiveSendMessageResponse:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConversationID:(id)a0;

@end
