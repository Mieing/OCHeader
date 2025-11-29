@class JumpItem, NSString, NoticeItem, ComplianceItem, NSMutableArray, BaseResponse;

@interface TransferPhoneHomePageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned int hasHisRcvr;
@property (retain, nonatomic) NSMutableArray *menu;
@property (retain, nonatomic) JumpItem *announcement;
@property (retain, nonatomic) NSString *homepageExt;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (nonatomic) BOOL isNewUser;
@property (retain, nonatomic) ComplianceItem *complianceItem;

+ (void)initialize;

@end
