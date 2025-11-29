@class UsePopularityCardResponse_Data;

@interface UsePopularityCardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UsePopularityCardResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
