@class NSString, BaseResponse;

@interface WeAppSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int updateCode;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *json;

+ (void)initialize;

@end
