@class AnchorLinkmicRecordsResponse_ResponseData;

@interface AnchorLinkmicRecordsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AnchorLinkmicRecordsResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
