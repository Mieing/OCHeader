@class NSString;

@interface GetUrlInfoReqItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int urlType;
@property (nonatomic) unsigned int sessionType;
@property (retain, nonatomic) NSString *sessionName;
@property (retain, nonatomic) NSString *objId;
@property (retain, nonatomic) NSString *msgUserName;

+ (void)initialize;

@end
