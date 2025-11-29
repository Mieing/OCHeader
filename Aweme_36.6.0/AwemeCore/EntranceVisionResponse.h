@class EntranceVisionResponse_Data;

@interface EntranceVisionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EntranceVisionResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
