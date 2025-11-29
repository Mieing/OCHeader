@class NSString, UIImageView, UILabel, UIView;

@interface WCStartLiveHalfScreenView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) UIView *detailView;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)configdetailView;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
