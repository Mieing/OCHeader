@class AudienceReceiverAddResponse_Data;

@interface AudienceReceiverAddResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AudienceReceiverAddResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
