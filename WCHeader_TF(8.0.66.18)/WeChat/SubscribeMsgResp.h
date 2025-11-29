@class BaseResponse, NSString, SubscribeMsgShowInfo, NSData, SubscribeMsgWording, NSMutableArray;

@interface SubscribeMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infoList;
@property (retain, nonatomic) SubscribeMsgWording *wording;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *appiconUrl;
@property (nonatomic) unsigned int notShowAlways;
@property (nonatomic) unsigned int alwaysChooseStatus;
@property (nonatomic) unsigned int cacheMaxAge;
@property (nonatomic) unsigned int isOpen;
@property (nonatomic) unsigned int subscribeMsgEntry;
@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) unsigned int wxaErrorCode;
@property (retain, nonatomic) NSString *wxaErrorMessage;
@property (nonatomic) BOOL wxaUserCancel;
@property (retain, nonatomic) NSString *mainDescription;
@property (retain, nonatomic) NSString *subDescription;
@property (nonatomic) unsigned int showStyle;
@property (retain, nonatomic) SubscribeMsgShowInfo *showInfo;
@property (nonatomic) unsigned int notShowReject;
@property (retain, nonatomic) NSString *extData;
@property (nonatomic) unsigned int templateMsgSettingEntry;

+ (void)initialize;

@end
