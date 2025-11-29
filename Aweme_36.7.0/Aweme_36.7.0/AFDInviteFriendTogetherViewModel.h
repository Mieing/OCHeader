@class NSString, NSDictionary, UIView;

@interface AFDInviteFriendTogetherViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL needFollowingList;
@property (nonatomic) BOOL shouldShowCloseButton;
@property (copy, nonatomic) id /* block */ didTapCloseButton;
@property (copy, nonatomic) id /* block */ didTapOffSiteButton;
@property (copy, nonatomic) id /* block */ clickInviteButtonBlock;
@property (copy, nonatomic) id /* block */ inviteUsersBlock;
@property (retain, nonatomic) UIView *headerContainerView;
@property (nonatomic) unsigned long long functionType;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL shouldShowIntimateInviteView;

- (void).cxx_destruct;

@end
