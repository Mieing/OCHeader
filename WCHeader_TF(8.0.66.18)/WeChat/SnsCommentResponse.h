@class SnsObject, SnsTips, BaseResponse;

@interface SnsCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsObject *snsObject;
@property (retain, nonatomic) SnsTips *snsTips;
@property (nonatomic) int commentId;

+ (void)initialize;

@end
