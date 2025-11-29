@class NSMutableArray;

@interface GetRoomInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *roomInfoList;
@property (retain, nonatomic) NSMutableArray *chatBotList;
@property (nonatomic) int roomListTotal;

+ (void)initialize;

@end
