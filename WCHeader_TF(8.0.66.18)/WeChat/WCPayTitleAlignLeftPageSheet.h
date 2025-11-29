@class WCPayWebImageView, NSString, MMPageSheetAdapter, UILabel, UIView, PopUpWithHalfDialog;
@protocol WCPayTitleAlignLeftPageSheetDelegate;

@interface WCPayTitleAlignLeftPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>

@property (weak, nonatomic) id<WCPayTitleAlignLeftPageSheetDelegate> delegate;
@property (retain, nonatomic) PopUpWithHalfDialog *pageData;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) WCPayWebImageView *contentImgView;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageSheetDetailView;
@property (nonatomic) double imgWidthHeightRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)updateDetailViewWithPopUpDialogData:(id)a0;
- (void)showPageSheet;
- (void)setupDetailView;
- (void)dismissPageSheet;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (void).cxx_destruct;

@end
