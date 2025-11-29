@class NSString, ChatRoomToolMessageEventInfo, CMessageWrap;
@protocol RoomToolsAlterTodoDelegate;

@interface RoomToolsAlterTodoCgi : WCBaseCgi

@property (weak, nonatomic) id<RoomToolsAlterTodoDelegate> delegate;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) ChatRoomToolMessageEventInfo *eventInfo;
@property (retain, nonatomic) CMessageWrap *message;

- (id)init;
- (void)cgiUpdateTodo:(id)a0 chatName:(id)a1;
- (void)cgiRevokeTodo:(id)a0 chatName:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
