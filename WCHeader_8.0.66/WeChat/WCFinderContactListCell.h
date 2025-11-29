@class WCFinderContact, UIImageView, WCFinderHeadImageView, UILabel, WCFinderAuthInfoIconView, UIView;
@protocol WCFinderContactListCellDelegate;

@interface WCFinderContactListCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UIImageView *liveCircle;
@property (retain, nonatomic) UILabel *liveTipsLabel;
@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *brandTipsLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) WCFinderContact *contact;
@property (weak, nonatomic) id<WCFinderContactListCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)onRemoveAllMenu;
- (void)setupMenu;
- (void)updateWithContact:(id)a0;
- (void)drawNormalSeparator;
- (void)removeSeparator;
- (void)onLiveCircleDidClick;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
