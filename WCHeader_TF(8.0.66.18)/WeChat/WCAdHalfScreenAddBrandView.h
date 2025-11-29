@class MMUILabel, NSString, UIImageView, MMPageSheetBaseView, WCAdURLImageView;

@interface WCAdHalfScreenAddBrandView : WCAdHalfScreenContainerBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMPageSheetBaseView *sheetView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) WCAdURLImageView *headImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerInfo:(id)a0;
- (void)setupSheetView;
- (void)initSubviews;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
