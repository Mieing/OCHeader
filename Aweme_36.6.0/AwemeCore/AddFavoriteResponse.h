@class AddFavoriteResponse_ResponseData;

@interface AddFavoriteResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AddFavoriteResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
