@class NSString, WCFinderHeadImageView, UIImageView, UILabel, UIView, WCFinderContact;
@protocol WCFinderMemberShipFollowContactListCellDelegate;

@interface WCFinderMemberShipFollowContactListCell : UITableViewCell <WCFinderMembershipFollowInfoExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) UILabel *expireTime;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderMemberShipFollowContactListCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithContact:(id)a0;
- (id)formatTimeString:(double)a0;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)a0;
- (void).cxx_destruct;

@end
