@class RemoveShelfResponse_Data;

@interface RemoveShelfResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RemoveShelfResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
