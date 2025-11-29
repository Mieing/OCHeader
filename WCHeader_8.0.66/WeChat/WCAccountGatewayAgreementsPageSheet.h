@class NSString, MMUILabel, NSMutableArray;

@interface WCAccountGatewayAgreementsPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMUILabel *headerLabel;
@property (retain, nonatomic) NSMutableArray *agreementCheckBoxes;
@property (copy, nonatomic) id /* block */ onGoNextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithTitle:(id)a0 agreements:(id)a1 maxHeight:(double)a2;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;

@end
