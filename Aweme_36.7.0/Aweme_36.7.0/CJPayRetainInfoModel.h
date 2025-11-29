@class NSString, UIColor, NSArray;

@interface CJPayRetainInfoModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *topButtonText;
@property (copy, nonatomic) NSString *bottomButtonText;
@property (nonatomic) long long voucherType;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *voucherContent;
@property (copy, nonatomic) NSArray *retainMsgModels;
@property (copy, nonatomic) id /* block */ topButtonBlock;
@property (copy, nonatomic) id /* block */ closeCompletionBlock;
@property (copy, nonatomic) id /* block */ bottomButtonBlock;
@property (copy, nonatomic) NSString *outPutActivityLabelForTrack;

- (BOOL)hasDiscount;
- (id)getVourcherTypeStr;
- (void)trackRetainPopUpWithEvent:(id)a0 trackDelegate:(id)a1 extraParam:(id)a2;
- (void).cxx_destruct;

@end
