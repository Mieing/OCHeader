@class GetGiftVotesResponse_Data;

@interface GetGiftVotesResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetGiftVotesResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
