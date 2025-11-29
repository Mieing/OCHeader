@class RichTextView, MMFinderLiveFansGroupInputView, UIImageView, UITapGestureRecognizer, NSString, MMUIButton, MMUILabel;

@interface MMFinderLiveFansGroupCreateContentView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIImageView *fansGroupIconView;
@property (retain, nonatomic) MMUIButton *foldedBtn;
@property (retain, nonatomic) MMUILabel *fansGroupCreateTitleLabel;
@property (retain, nonatomic) RichTextView *fansGroupCreateSubTitleLabel;
@property (retain, nonatomic) MMFinderLiveFansGroupInputView *inputView;
@property (retain, nonatomic) MMUILabel *fansGroupInputTipLabel;
@property (retain, nonatomic) MMUIButton *fansGroupCreateButton;
@property (retain, nonatomic) UITapGestureRecognizer *closeTapGesture;
@property (nonatomic) BOOL isKeyBoardShow;
@property (nonatomic) double keyBoardHeight;
@property (copy, nonatomic) id /* block */ createCallback;
@property (copy, nonatomic) id /* block */ createCompletion;
@property (copy, nonatomic) id /* block */ closeFansGroupCreateCallback;
@property (copy, nonatomic) id /* block */ openFansGroupWebCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutFoldedBtn;
- (void)layoutFansGroupIconView;
- (void)layoutFansGroupCreateTitleLabel;
- (void)layoutFansGroupCreateSubTitleLabel;
- (void)layoutInputView;
- (void)layoutFansGroupInputTipLabel;
- (void)layoutFansGroupCreateButton;
- (void)updateUIForKeyBoardShowChanged;
- (void)updateFansGroupButtonBottom;
- (void)createFansGroupInfo;
- (void)createFansGroupAction;
- (void)updateCloseGestureForKeyBoardShowChanged;
- (void)closeGesture:(id)a0;
- (BOOL)isSelfFirstResponder;
- (void)updateUIForKeyBoardShow:(BOOL)a0 keyBoardHeight:(double)a1;
- (void)viewWillClose;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickFoldedBtn;
- (void)reportForOpenFansGroupDetailPage;
- (void).cxx_destruct;

@end
