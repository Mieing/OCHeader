@class FinderObject, BaseResponse;

@interface FinderPostDraftResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderObject *object;

+ (void)initialize;

@end
