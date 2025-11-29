@class NSString;

@interface CJPayDyPayMethodAdjustCellViewModel : CJPayBaseListViewModel

@property (nonatomic) BOOL isInFoldStatus;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSString *addBankCardFoldDesc;
@property (copy, nonatomic) NSString *absoluteFoldDesc;
@property (nonatomic) BOOL isDescShowInCenter;

- (Class)getViewClass;
- (void).cxx_destruct;
- (double)viewHeight;

@end
