@class BaseResponse;

@interface AddFavItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int favId;
@property (nonatomic) unsigned int updateSeq;
@property (nonatomic) unsigned long long usedSize;

+ (void)initialize;

@end
