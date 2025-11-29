@class NSString, CJPaySubPayTypeGroupInfo;

@interface CJPayDyPayQualityMethodAdjustCellViewModel : CJPayBaseListViewModel

@property (nonatomic) BOOL isInFoldStatus;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSString *addBankCardFoldDesc;
@property (copy, nonatomic) NSString *absoluteFoldDesc;
@property (nonatomic) BOOL isDescShowInCenter;
@property (copy, nonatomic) NSString *bankCardFoldDesc;
@property (weak, nonatomic) CJPaySubPayTypeGroupInfo *groupInfo;

- (Class)getViewClass;
- (void).cxx_destruct;
- (double)viewHeight;

@end
