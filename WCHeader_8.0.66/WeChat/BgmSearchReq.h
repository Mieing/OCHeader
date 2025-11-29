@class BaseRequest, NSString;

@interface BgmSearchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long reqUin;
@property (nonatomic) unsigned long long searchReqId;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int reqNum;
@property (nonatomic) unsigned long long relatedRecId;
@property (nonatomic) unsigned long long bussId;

+ (void)initialize;

@end
