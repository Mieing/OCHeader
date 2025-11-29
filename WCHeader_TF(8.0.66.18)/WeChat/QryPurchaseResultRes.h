@class BaseResponse, NSString, NewDocumentItem, LqtDialog, GuideCellItem;

@interface QryPurchaseResultRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int purchaseState;
@property (retain, nonatomic) NSString *upgradeWording;
@property (retain, nonatomic) NSString *profitDate;
@property (retain, nonatomic) GuideCellItem *guideCell;
@property (retain, nonatomic) NSString *purchaseResultWording;
@property (retain, nonatomic) NSString *confirmResultWording;
@property (retain, nonatomic) NewDocumentItem *operationView;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
