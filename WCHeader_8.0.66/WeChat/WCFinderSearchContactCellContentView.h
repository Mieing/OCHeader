@class FavAttributeCPLabel, WCFinderHeadImageView, UIImageView, UIView, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderSearchContactCellContentView : UIView

@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *liveCircle;
@property (retain, nonatomic) UILabel *liveTipsLabel;
@property (retain, nonatomic) FavAttributeCPLabel *nickNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *brandTipsLabel;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) UILabel *friendFollowCountLabel;
@property (retain, nonatomic) FavAttributeCPLabel *authInfoLabel;
@property (retain, nonatomic) FavAttributeCPLabel *signatureLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) BOOL useDarkStyle;
@property (retain, nonatomic) UIView *accessibleView;
@property (copy, nonatomic) id /* block */ liveClickBlock;

+ (double)calcuateHeight:(id)a0;
+ (id)replaceNewlineCharacter2WhitespaceCharacter:(id)a0;

- (id)initWithDarkStyle:(BOOL)a0;
- (void)initSubview;
- (void)setClickBlock:(id /* block */)a0;
- (void)onLiveCircleDidClick;
- (void)prepareForReuse;
- (void)updateSearchInfo:(id)a0 isShowSeparatorLine:(BOOL)a1 shouldHideFollow:(BOOL)a2 useRoundHeader:(BOOL)a3;
- (void)updateSearchInfo:(id)a0 params:(id)a1;
- (void)flexLayoutSubviews;
- (id)currentStyleColor:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
