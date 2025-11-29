@class NSString;

@interface RadarSearchMember : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int distance;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *smallImgUrl;
@property (retain, nonatomic) NSString *encodeUserName;
@property (retain, nonatomic) NSString *antispamTicket;

+ (void)initialize;

@end
