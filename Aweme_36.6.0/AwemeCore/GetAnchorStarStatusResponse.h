@class GetAnchorStarStatusResponse_Data;

@interface GetAnchorStarStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetAnchorStarStatusResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
