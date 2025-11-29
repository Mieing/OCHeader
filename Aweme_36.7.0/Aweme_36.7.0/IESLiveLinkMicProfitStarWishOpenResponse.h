@class IESLiveLinkMicProfitStarWishOpenResponse_ResponseData;

@interface IESLiveLinkMicProfitStarWishOpenResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitStarWishOpenResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
