@class SearchOpenIMContactItem, NSString, BaseResponse;

@interface SearchOpenIMContactResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SearchOpenIMContactItem *contact;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *spamWording;

+ (void)initialize;

@end
