@class RoomV4TagsResponse_Data;

@interface RoomV4TagsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RoomV4TagsResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
