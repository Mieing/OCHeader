@class HTSLiveRoom;

@interface RoomCreateResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
