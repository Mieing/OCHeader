@class UIColor, NSString, NSDictionary, AWEAwemeModel, AWEUserModel;

@interface AWEUserListPanelCellItem : NSObject

@property (nonatomic) long long cellType;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL hasMoreActions;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL isFriends;
@property (nonatomic) BOOL isFamiliarItemAwemeModel;
@property (nonatomic) long long currentAwemeItemUserFollowStatus;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isECommerceBoostInfoPanel;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) unsigned long long rewardType;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) UIColor *onlineDotBGColor;
@property (nonatomic) BOOL isShowSourceType;
@property (nonatomic) BOOL isLightMode;
@property (nonatomic) BOOL shouldIgnoreUnfollowItemAndHideHisPostItemInMoreActions;
@property (copy, nonatomic) id /* block */ customRightButtonAction;

- (void).cxx_destruct;

@end
