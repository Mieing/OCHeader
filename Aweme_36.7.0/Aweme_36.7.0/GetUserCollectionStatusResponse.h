@class GetUserCollectionStatusResponse_Data;

@interface GetUserCollectionStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetUserCollectionStatusResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
