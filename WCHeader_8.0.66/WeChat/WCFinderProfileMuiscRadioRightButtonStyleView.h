@class MMListenCategoryItem, UIView, NSString, UIImageView, UIButton, MMListenFinderSingerProfileShowInfo, RichTextView, MMUILabel;

@interface WCFinderProfileMuiscRadioRightButtonStyleView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIButton *bgCircleView;
@property (retain, nonatomic) UIImageView *playBtnView;
@property (retain, nonatomic) MMUILabel *playWordingLabel;
@property (retain, nonatomic) MMUILabel *radioTitleLabel;
@property (retain, nonatomic) RichTextView *consumeDataLabel;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIView *highlightMask;
@property (retain, nonatomic) MMListenFinderSingerProfileShowInfo *showInfo;
@property (retain, nonatomic) MMListenCategoryItem *singerRadioCategory;
@property (retain, nonatomic) RichTextView *extraDescLabel;
@property (nonatomic) BOOL displayCoveredMode;
@property (nonatomic) int scene;
@property (copy, nonatomic) id /* block */ onTapCallBack;
@property (copy, nonatomic) id /* block */ onJumpMusicianCategoryCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapPlay;
- (void)initSubviews;
- (void)layoutSubviews;
- (BOOL)showDarkStyle;
- (void)applyRadioInfo:(id)a0;
- (id)genRichText:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)genReportParams;
- (void).cxx_destruct;

@end
