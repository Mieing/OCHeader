@class NSString;

@interface LbsRoomMember : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *antispamTicket;

+ (void)initialize;

@end
