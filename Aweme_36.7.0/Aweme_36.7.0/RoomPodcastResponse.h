@class RoomPodcastResponse_Data;

@interface RoomPodcastResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RoomPodcastResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
