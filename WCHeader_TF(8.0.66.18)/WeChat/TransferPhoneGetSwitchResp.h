@class NSString, ComplianceItem, BaseResponse;

@interface TransferPhoneGetSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) NSString *entranceName;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) BOOL isNewUser;
@property (retain, nonatomic) ComplianceItem *complianceItem;

+ (void)initialize;

@end
