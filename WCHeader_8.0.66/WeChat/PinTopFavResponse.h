@class FavExtInfo, BaseResponse;

@interface PinTopFavResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FavExtInfo *favExtInfo;

+ (void)initialize;

@end
