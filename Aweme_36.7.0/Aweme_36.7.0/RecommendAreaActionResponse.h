@class RecommendAreaActionResponse_Data;

@interface RecommendAreaActionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RecommendAreaActionResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
