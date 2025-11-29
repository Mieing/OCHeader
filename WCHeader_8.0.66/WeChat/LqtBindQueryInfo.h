@class NSString, TipsItem, ComonPromptInfo, BalanceInfo, NSMutableArray;

@interface LqtBindQueryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *defaultCardBindSerial;
@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) BOOL isHideBankCard;
@property (retain, nonatomic) BalanceInfo *balanceInfo;
@property (retain, nonatomic) NSString *lqFetchPreArriveTimeWording;
@property (nonatomic) BOOL isReqAgainAfterDeal;
@property (nonatomic) unsigned int lqMaxAmountPerRedeem;
@property (retain, nonatomic) NSString *balanceWording;
@property (nonatomic) int funcAfterWording;
@property (retain, nonatomic) TipsItem *balanceSecondLineTips;
@property (retain, nonatomic) ComonPromptInfo *purchaseFromLqWording;
@property (retain, nonatomic) NSString *selectAccountTitle;
@property (retain, nonatomic) NSString *selectAccountPrompt;

+ (void)initialize;

@end
