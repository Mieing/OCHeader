@class BaseRequest, NSString;

@interface WxaAppGetWxaUseUserInfoRecordListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int recordCount;

+ (void)initialize;

@end
