@class NSMutableArray;

@interface FinderLivePaymentSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int chargeUnitPriceInWecoin;
@property (retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeUsernameList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeFileIdList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeChatroomNameList;
@property (nonatomic) unsigned int sessionSelectFromAssistant;
@property (nonatomic) unsigned int chargeIsMemberFree;
@property (retain, nonatomic) NSMutableArray *freeOfChargeFriendLabelList;

+ (void)initialize;

@end
