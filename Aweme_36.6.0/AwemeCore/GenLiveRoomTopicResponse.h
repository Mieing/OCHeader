@class GenLiveRoomTopicResponse_ResponseData;

@interface GenLiveRoomTopicResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GenLiveRoomTopicResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
