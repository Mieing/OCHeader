@class GetPopularityCardResponse_Data;

@interface GetPopularityCardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetPopularityCardResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
