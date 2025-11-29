@class NSString, UILabel, RichTextView, UIView;
@protocol FaceRecogPayContractConfirmViewDelegate;

@interface FaceRecogPayContractConfirmView : MMPageSheetBaseViewController <ILinkEventExt, MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *linkTextView;
@property (retain, nonatomic) NSString *contractUrl;
@property (retain, nonatomic) NSString *contractTitle;
@property (retain, nonatomic) NSString *contractDesc;
@property (weak, nonatomic) id<FaceRecogPayContractConfirmViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLink:(id)a0 Title:(id)a1 Desc:(id)a2;
- (void)viewDidLoad;
- (id)getTitleForPageSheet;
- (id)getDescForPageSheet;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
