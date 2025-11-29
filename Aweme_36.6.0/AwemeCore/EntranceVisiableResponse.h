@class EntranceVisiableResponse_Data;

@interface EntranceVisiableResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EntranceVisiableResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
