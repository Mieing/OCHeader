@class NSString;

@interface MMFinderLiveShopShelfAddPreviousLiveGoodsWarningPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL hasClickedConfirm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithPageInfo:(id)a0 completion:(id /* block */)a1;

- (id)initWithPageInfo:(id)a0;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)layoutSubviews;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
