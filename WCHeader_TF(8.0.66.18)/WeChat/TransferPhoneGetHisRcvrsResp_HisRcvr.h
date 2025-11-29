@class NSString;

@interface TransferPhoneGetHisRcvrsResp_HisRcvr : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *wxName;
@property (retain, nonatomic) NSString *realName;
@property (retain, nonatomic) NSString *phone;
@property (nonatomic) unsigned int invalid;

+ (void)initialize;

@end
