@class BubbleDotListResponse_BubbleDotListData;

@interface BubbleDotListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BubbleDotListResponse_BubbleDotListData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
