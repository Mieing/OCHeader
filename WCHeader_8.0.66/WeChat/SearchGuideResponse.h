@class NSString, BaseResponse;

@interface SearchGuideResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *json;
@property (nonatomic) unsigned int timevalSec;
@property (retain, nonatomic) NSString *searchId;

+ (void)initialize;

@end
