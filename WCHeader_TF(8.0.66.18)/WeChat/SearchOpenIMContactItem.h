@class NSString, OpenIMContactCustomInfo;

@interface SearchOpenIMContactItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *pyinitial;
@property (retain, nonatomic) NSString *quanPin;
@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int matchType;
@property (retain, nonatomic) OpenIMContactCustomInfo *customInfo;
@property (retain, nonatomic) NSString *antispamTicket;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *descWordingId;

+ (void)initialize;

@end
