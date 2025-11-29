@class WCShareCardMemberHeaderCardImageView, NSString, UIView, WCShareCardMemberHeaderGiftInfo;
@protocol WCShareCardMemberCustomImgHeaderDelegate;

@interface WCShareCardMemberCustomImgHeaderView : WCShareCardBaseHeaderView

@property (nonatomic) BOOL hasDetailView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WCShareCardMemberHeaderGiftInfo *giftInfo;
@property (retain, nonatomic) WCShareCardMemberHeaderCardImageView *cardImageView;
@property (nonatomic) BOOL acceptAble;
@property (retain, nonatomic) UIView *cardImgContentView;
@property (weak, nonatomic) id<WCShareCardMemberCustomImgHeaderDelegate> delegate;

- (id)initWithViewWidth:(double)a0 withCardSourceData:(id)a1 isShareCard:(BOOL)a2 acceptAble:(BOOL)a3 cardStatus:(int)a4 isNeedHideAcceptBtn:(BOOL)a5 delegate:(id)a6 isHasDetailView:(BOOL)a7 giftInfo:(id)a8 cardImgView:(id)a9;
- (void)setupView;
- (id)getMemberCardHeaderContentView;
- (void)getInvalidStatusTitle;
- (id)createGiftInfoView;
- (id)createBannerView;
- (id)createCardImgView;
- (BOOL)hasCardNum;
- (id)createSecondaryFieldView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)genLabelWithFontSize:(double)a0 text:(id)a1 textColor:(id)a2 x:(double)a3 y:(double)a4 maxWidth:(double)a5 superView:(id)a6 needShadow:(BOOL)a7;
- (id)insertSpaceChar:(id)a0 hasTransline:(BOOL)a1;
- (id)getBrandColor;
- (BOOL)hasReceive;
- (void)fieldClicked:(id)a0;
- (void)onInfoBtnClick:(id)a0;
- (void)onClickApplyBtn:(id)a0;
- (void)onBannerTap:(id)a0;
- (void).cxx_destruct;

@end
