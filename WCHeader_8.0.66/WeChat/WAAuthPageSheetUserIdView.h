@class UILabel, UIView, MMTableView, NSString, MMCheckBox, RichTextView, ZZFLEXAngel, MMUIButton;

@interface WAAuthPageSheetUserIdView : WAAuthPageSheetBaseView <ILinkEventExt>

@property (retain, nonatomic) UIView *auiView;
@property (retain, nonatomic) UILabel *idLabel;
@property (retain, nonatomic) UILabel *phoneTitleLabel;
@property (retain, nonatomic) MMTableView *phoneView;
@property (retain, nonatomic) ZZFLEXAngel *phoneAngel;
@property (retain, nonatomic) MMUIButton *managerButton;
@property (retain, nonatomic) UIView *protocolView;
@property (retain, nonatomic) MMCheckBox *protocolJumpCheckBox;
@property (retain, nonatomic) RichTextView *protocolJumpRichText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;
+ (double)tableViewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)pageSheet;
- (id)pageInfo;
- (void).cxx_destruct;

@end
