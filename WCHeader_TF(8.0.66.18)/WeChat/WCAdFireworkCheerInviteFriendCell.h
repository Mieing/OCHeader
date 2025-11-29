@class WCDataItem, WCAdFireworkCheerInviteFriendView, NSString;
@protocol WCAdFireworkCheerInviteFriendCellDelegate;

@interface WCAdFireworkCheerInviteFriendCell : MMTableViewCell <WCAdFireworkCheerInviteFriendViewDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdFireworkCheerInviteFriendView *adFireworkCheerInviteFriendView;
@property (weak, nonatomic) id<WCAdFireworkCheerInviteFriendCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultIdentifier;
+ (double)defaultHeight;

@end
