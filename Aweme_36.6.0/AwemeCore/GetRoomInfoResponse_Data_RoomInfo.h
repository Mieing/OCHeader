@class NSString;

@interface GetRoomInfoResponse_Data_RoomInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int liveDuration;

+ (id)descriptor;

@end
