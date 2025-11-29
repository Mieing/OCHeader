@class BaseResponse;

@interface GetCardCountResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int hasCardItem;
@property (nonatomic) unsigned int hasShareCard;

+ (void)initialize;

@end
