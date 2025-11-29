@class NSString;

@interface ResourceDeleteHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned long long allDataSize;
@property (nonatomic) unsigned long long filterType;
@property (nonatomic) BOOL checkDeleteAll;
@property (copy, nonatomic) id /* block */ confirmCallBack;
@property (copy, nonatomic) id /* block */ linkTapCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSize:(unsigned long long)a0 allDataSize:(unsigned long long)a1 filterType:(unsigned long long)a2 checkDeleteAll:(BOOL)a3;
- (void)setupDetaiView;
- (void)setupBottomSubview;
- (void)onTapDeleteButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetCancelButtonTitle;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
