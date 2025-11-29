@class UIView, NSString, WCFinderContact, SnsPoiDetail, UIImageView, WCFinderAuthInfoIconView, RichTextView, WCFinderHeadImageView, MMUILabel;
@protocol WCFinderPOIRelatedUICollectionReusableViewDelegate;

@interface WCFinderPOIRelatedUICollectionReusableView : WCFinderCollectionReusableView <ILinkEventExt, WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) SnsPoiDetail *poiDetail;
@property (retain, nonatomic) RichTextView *addressMainLabel;
@property (retain, nonatomic) RichTextView *addressSubLabel;
@property (retain, nonatomic) RichTextView *addressintroductionLabel;
@property (retain, nonatomic) RichTextView *addressPriceTipsLabel;
@property (retain, nonatomic) RichTextView *addressBusinessHourLabel;
@property (retain, nonatomic) RichTextView *addressPhoneRichText;
@property (retain, nonatomic) MMUILabel *noticeWordingLabel;
@property (retain, nonatomic) UIView *navigateView;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) UIView *bindContactContainerView;
@property (retain, nonatomic) MMUILabel *bindContactTipsLabel;
@property (retain, nonatomic) UIView *bindContactView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UIImageView *contactArrowIconView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) NSString *noticeWording;
@property (nonatomic) BOOL onlyShowPoiName;
@property (nonatomic) int addressSubType;
@property (weak, nonatomic) id<WCFinderPOIRelatedUICollectionReusableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)headerViewHeightWith:(id)a0 bindContact:(id)a1 noticeWording:(id)a2 isDataEmpty:(BOOL)a3 width:(double)a4 onlyShowPoiName:(BOOL)a5 addressSubType:(int)a6;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initSubView;
- (void)updateBindContactContainerViewMargin;
- (void)updateBindContactViewMargin;
- (void)renderBindContactView;
- (void)updateAuthInfoIconView;
- (void)updateWith:(id)a0 bindContact:(id)a1 noticeWording:(id)a2 isDataEmpty:(BOOL)a3 onlyShowPoiName:(BOOL)a4 totalFeedsCount:(long long)a5 friendLikeCount:(long long)a6 addressSubType:(int)a7;
- (id)countInfoString:(BOOL)a0 feedCount:(long long)a1 friendLikeCount:(long long)a2;
- (void)adjustUIMargin:(BOOL)a0;
- (void)onClickBindContactView:(id)a0;
- (void)onClickNavigateView:(id)a0;
- (void)onNavigateAction;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onPhoneClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void).cxx_destruct;

@end
