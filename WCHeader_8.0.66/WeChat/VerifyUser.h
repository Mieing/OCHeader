@class ImgInfoList, NSString, PhoneNumListInfo, SKBuiltinBuffer_t;

@interface VerifyUser : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *verifyUserTicket;
@property (retain, nonatomic) NSString *antispamTicket;
@property (nonatomic) unsigned int friendFlag;
@property (retain, nonatomic) NSString *chatRoomUserName;
@property (retain, nonatomic) NSString *sourceUserName;
@property (retain, nonatomic) NSString *sourceNickName;
@property (nonatomic) unsigned int scanQrcodeFromScene;
@property (retain, nonatomic) NSString *reportInfo;
@property (nonatomic) unsigned int shareCardForwardLevel;
@property (retain, nonatomic) SKBuiltinBuffer_t *shareCardForwardInfo;
@property (retain, nonatomic) NSString *outerUrl;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) SKBuiltinBuffer_t *bizReportInfo;
@property (nonatomic) unsigned int subscribeBizLive;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *labelIdList;
@property (retain, nonatomic) PhoneNumListInfo *phoneNumListInfo;
@property (retain, nonatomic) ImgInfoList *imgInfoList;

+ (void)initialize;

@end
