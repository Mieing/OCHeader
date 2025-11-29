@class MMHeadImageView, WCFinderContact, WCFinderHeadImageView, UIImageView, MMLiveCommentDataItem, NSString, MMUILabel;

@interface WCFinderLiveCommentFinderMenuItemView : UIView <WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMHeadImageView *likeHeadImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) UIImageView *rightArrowImgView;
@property (retain, nonatomic) UIImageView *roleImgView;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)finderMenuItemMinWidth;
+ (double)finderMenuItemStandardHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutHeaderImageView;
- (void)layoutlikeHeadImageView;
- (void)layoutNameLabel;
- (void)layoutRightArrowImgView;
- (void)layoutRoleImgView;
- (void)updateNameLabelWidth;
- (void).cxx_destruct;

@end
