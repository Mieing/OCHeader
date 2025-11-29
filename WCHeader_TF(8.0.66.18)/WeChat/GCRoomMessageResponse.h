@class NSArray, ReceiveChatroomMsgResponse;

@interface GCRoomMessageResponse : NSObject

@property (retain, nonatomic) NSArray *messageArray;
@property (retain, nonatomic) ReceiveChatroomMsgResponse *roomResponse;
@property (nonatomic) BOOL isFromCache;

- (void).cxx_destruct;

@end
