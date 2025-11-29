@class BaseRequest, NSString;

@interface DeleteBizReadRecordReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int delType;
@property (retain, nonatomic) NSString *bizUin;
@property (nonatomic) unsigned int appmsgId;
@property (nonatomic) unsigned int itemId;
@property (nonatomic) unsigned int readTime;

+ (void)initialize;

@end
