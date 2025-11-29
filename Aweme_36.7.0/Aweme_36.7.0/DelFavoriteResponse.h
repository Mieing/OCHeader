@class DelFavoriteResponse_ResponseData;

@interface DelFavoriteResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DelFavoriteResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
