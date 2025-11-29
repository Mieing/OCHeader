@class NSString;

@interface ChatroomMsgEmoji : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int len;
@property (retain, nonatomic) NSString *productid;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *extxml;
@property (retain, nonatomic) NSString *cdnurl;
@property (nonatomic) unsigned int newxmlflag;
@property (retain, nonatomic) NSString *designerid;
@property (retain, nonatomic) NSString *thumburl;
@property (retain, nonatomic) NSString *encrypturl;
@property (retain, nonatomic) NSString *aeskey;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *externurl;
@property (retain, nonatomic) NSString *externmd5;
@property (retain, nonatomic) NSString *activityid;
@property (retain, nonatomic) NSString *tpurl;
@property (retain, nonatomic) NSString *authkey;
@property (retain, nonatomic) NSString *attachedtext;
@property (retain, nonatomic) NSString *attachedtextcolor;
@property (retain, nonatomic) NSString *lensid;
@property (nonatomic) BOOL isCharge;
@property (retain, nonatomic) NSString *emojiattr;

+ (void)initialize;

@end
