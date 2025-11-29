@class NSString;

@interface BizImageMsgInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int fileId;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned long long masterId;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *contentUrl;

+ (void)initialize;

@end
