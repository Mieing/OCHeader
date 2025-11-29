@class StartScreenRecordResponse_ResponseData;

@interface StartScreenRecordResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StartScreenRecordResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
