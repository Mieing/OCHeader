@class PopUpWithHalfDialog, NSMutableArray;

@interface PurchaseInterceptHalfDialog : WXPBGeneratedMessage

@property (nonatomic) long long minAmount;
@property (nonatomic) long long maxAmount;
@property (retain, nonatomic) PopUpWithHalfDialog *dialog;
@property (retain, nonatomic) NSMutableArray *bindSerialList;

+ (void)initialize;

@end
