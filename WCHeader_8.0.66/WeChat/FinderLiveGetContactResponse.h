@class FinderLiveContact, BaseResponse;

@interface FinderLiveGetContactResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveContact *contact;

+ (void)initialize;

@end
