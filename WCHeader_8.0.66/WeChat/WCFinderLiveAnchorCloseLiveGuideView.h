@class NSString, FinderLiveSyncAnchorCloseLiveGuideInfoResp, UIView, RichTextView, MMUIButton;

@interface WCFinderLiveAnchorCloseLiveGuideView : MMPageSheetBaseView <ILinkEventExt>

@property (retain, nonatomic) FinderLiveSyncAnchorCloseLiveGuideInfoResp *guideInfo;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) RichTextView *titleLabel;
@property (retain, nonatomic) MMUIButton *continueButton;
@property (retain, nonatomic) MMUIButton *closeLiveButton;
@property (copy, nonatomic) id /* block */ closeLiveGuideBlock;
@property (copy, nonatomic) id /* block */ learnMoreBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithGuideInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)closeLiveButtonClick;
- (void)continueButtonClick;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
