@class PresentOrderInfo_EcsGiftInfo, NSString, NSMutableArray;

@interface PresentOrderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo *ecsgift;
@property (nonatomic) unsigned int cannotReceive;
@property (retain, nonatomic) NSString *cannotReceiveTips;
@property (retain, nonatomic) NSMutableArray *agreementIdList;

+ (void)initialize;

@end
