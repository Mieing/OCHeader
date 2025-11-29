@class NSString, ChatRoomToolMessageEventInfo;
@protocol RoomToolsReplyTodoDelegate;

@interface RoomToolsReplyTodoCgi : WCBaseCgi

@property (weak, nonatomic) id<RoomToolsReplyTodoDelegate> delegate;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) ChatRoomToolMessageEventInfo *eventInfo;

- (id)init;
- (BOOL)setChatRoomToolsReplyTodo:(id)a0 withMessageEventInfo:(id)a1;
- (void)cgiReplyTodo:(id)a0 chatName:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
