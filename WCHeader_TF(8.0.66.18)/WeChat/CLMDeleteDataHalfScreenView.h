@class NSString;

@interface CLMDeleteDataHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (nonatomic) unsigned long long dataSize;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *tipString;
@property (copy, nonatomic) NSString *confirmString;
@property (copy, nonatomic) id /* block */ confirmCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSize:(unsigned long long)a0 title:(id)a1 tip:(id)a2 confirmTip:(id)a3;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
