@class GetFansclubHomepageResult_Data;

@interface GetFansclubHomepageResult : IESLivePBBaseMessage

@property (retain, nonatomic) GetFansclubHomepageResult_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
