@class HalfPage, NSString, UIView, MMImageView, MMUILabel;
@protocol WCPaySaveQrcodeSuccessHalfPageDelegate;

@interface WCPaySaveQrcodeSuccessHalfPage : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMImageView *iconView;
@property (retain, nonatomic) MMImageView *pointView;
@property (retain, nonatomic) UIView *halfPageContentView;
@property (retain, nonatomic) HalfPage *halfPageInfo;
@property (weak, nonatomic) id<WCPaySaveQrcodeSuccessHalfPageDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHalfPageInfo:(id)a0;
- (void)viewDidLoad;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (double)pageSheetContentHeight;
- (id)pageSheetContentView;
- (void).cxx_destruct;

@end
