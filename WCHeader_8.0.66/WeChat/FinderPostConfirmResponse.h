@class NSString, FinderObject, FinderContact, BaseResponse;

@interface FinderPostConfirmResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderObject *object;
@property (retain, nonatomic) FinderContact *selfContact;
@property (retain, nonatomic) NSString *exportId;

+ (void)initialize;

@end
