@class NSString, TaskCenterEntranceResponse_ResponseData;

@interface TaskCenterEntranceResponse : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *payload;
@property (retain, nonatomic) TaskCenterEntranceResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
