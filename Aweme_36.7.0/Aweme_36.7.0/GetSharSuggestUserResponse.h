@class GetSharSuggestUserResponse_Data;

@interface GetSharSuggestUserResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetSharSuggestUserResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
