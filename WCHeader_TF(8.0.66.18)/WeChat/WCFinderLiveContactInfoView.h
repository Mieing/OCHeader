@class WCFinderLiveHeadImageLivingView, NSString, WCFinderAuthInfoIconView, UILabel, WCFinderContact;

@interface WCFinderLiveContactInfoView : UIView

@property (retain, nonatomic) WCFinderLiveHeadImageLivingView *headLivingView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL showAuthorIcon;
@property (nonatomic) BOOL showLiving;
@property (nonatomic) double titlePaddingHeader;
@property (nonatomic) double headerSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithContact:(id)a0 subTitle:(id)a1 showAuthorIcon:(BOOL)a2;
- (void)initViews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
