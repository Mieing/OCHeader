@class UILabel, NSString, UIImageView, WCFinderJumpInfoIconView, RichTextView, UIView;

@interface WCFinderAdBannerView : WCFinderJumpInfoView <WCFinderJumpInfoIconViewDelegate>

@property (retain, nonatomic) WCFinderJumpInfoIconView *iconView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UILabel *adLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 jumpInfo:(id)a1 enableClick:(BOOL)a2 disableIconColor:(id)a3 disableTextColor:(id)a4 iconSize:(struct CGSize { double x0; double x1; })a5 textFont:(id)a6 delegate:(id)a7 textNormalColor:(id)a8 adLabelColor:(id)a9;
- (void)dealloc;
- (id)fetchRecommendForJumpInfo:(id)a0;
- (id)getLocalDefaultPagResPath:(id)a0;
- (id)localIconFormJumpInfo:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 iconColor:(id)a2 enable:(BOOL)a3;
- (void)onClickAction;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (BOOL)videoPauseState;
- (id)videoTid;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
