@class RichTextView, CContact, NSString, TLProfileModel, UIButton;
@protocol TLProfileDetailContentViewDelegate;

@interface TLProfileDetailContentView : UIView <ILinkEventExt>

@property (retain, nonatomic) TLProfileModel *tlProfile;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) long long currentScene;
@property (retain, nonatomic) UIButton *bgButton;
@property (retain, nonatomic) RichTextView *descTextView;
@property (weak, nonatomic) id<TLProfileDetailContentViewDelegate> delegate;
@property (nonatomic) BOOL isAtDragDownState;
@property (nonatomic) BOOL forceShowIconDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithScene:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getTLProfileModel;
- (void)updateWithTLProfileModel:(id)a0;
- (void)updateDescLabelSizeWithWidth:(double)a0;
- (void)updateSourceViewSizeWithWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeToFitWidth:(double)a0;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)onClickAtBackgroundView:(id)a0;
- (double)contentTopPadding;
- (double)contentHorizonPadding;
- (double)contentBottomPadding;
- (BOOL)shouldHideContentAtDragDown;
- (BOOL)enableBackgroundButton;
- (void).cxx_destruct;

@end
