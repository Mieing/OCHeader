@class NSString, BaseResponse;

@interface AISummarySearchConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *json;
@property (nonatomic) unsigned int timevalSec;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *passKey;
@property (nonatomic) unsigned int passKeyValidTime;

+ (void)initialize;

@end
