@class NSString, NSMutableArray, NSData;

@interface GetA8KeyLiteRespInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int requestId;
@property (retain, nonatomic) NSString *respUrl;
@property (retain, nonatomic) NSString *shareUrl;
@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *antiSpamTicket;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *menuWording;
@property (nonatomic) unsigned int authBits;
@property (nonatomic) unsigned int antiSpamBits;
@property (nonatomic) unsigned int domainLevelInterval;
@property (retain, nonatomic) NSMutableArray *httpHeader;
@property (retain, nonatomic) NSData *jsapiControlBytes;

+ (void)initialize;

@end
