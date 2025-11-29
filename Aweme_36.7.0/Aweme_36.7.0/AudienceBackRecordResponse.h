@class AudienceBackRecordData;

@interface AudienceBackRecordResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AudienceBackRecordData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
