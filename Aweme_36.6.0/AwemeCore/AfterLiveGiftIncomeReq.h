@class NSString;

@interface AfterLiveGiftIncomeReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *compere;
@property (copy, nonatomic) NSString *memberIncomeList;

+ (id)descriptor;

@end
