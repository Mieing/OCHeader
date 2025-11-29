@class GetClosePageResponse_Data;

@interface GetClosePageResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetClosePageResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
