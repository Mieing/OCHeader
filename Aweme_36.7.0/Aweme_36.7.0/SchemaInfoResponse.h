@class SchemaInfoData;

@interface SchemaInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SchemaInfoData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
