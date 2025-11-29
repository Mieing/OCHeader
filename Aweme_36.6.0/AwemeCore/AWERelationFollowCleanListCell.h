@class NSString, AWERelationCleanListTitileView, AWEInsetsLabel, AWEUserModel, MASConstraint;

@interface AWERelationFollowCleanListCell : AWEUIListTableViewCell <AWEUserMessage>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEInsetsLabel *desWithBorderLabel;
@property (retain, nonatomic) AWERelationCleanListTitileView *nameView;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (retain, nonatomic) MASConstraint *centerYConstraint;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__defaultImage;
+ (id)identifier;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)configWithUser:(id)a0;
- (id)followButtonColorModel;
- (void)__followBtnClicked;
- (void)__updateDisplayContent;
- (void)__refreshFollowBtnUI;
- (void)__updateLabel;
- (id)__tagString;
- (void)__updateTitleAndDescConstraints;
- (void)__unfollowUser;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setupUI;

@end
