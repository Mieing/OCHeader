@class BaseResponse;

@interface FinderLikeBuzzwordResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long likeSeq;

+ (void)initialize;

@end
