@class NSString, AWEAliasEditLabel, AWEUserModel, UIButton;

@interface AWERelationFollowGroupMemberCell : AWEUIListTableViewCell <AWERelationFollowGroupCellUIUpdateProtocol>

@property (retain, nonatomic) AWEAliasEditLabel *nameLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ moreIconTapAction;
@property (copy, nonatomic) id /* block */ followButtonTapAction;
@property (nonatomic) BOOL hideMoreBtn;
@property (nonatomic) BOOL isSpecialGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__defaultImage;
+ (id)defaultStyleIdentifier;

- (void)configCell:(id)a0;
- (void)__moreButtonClicked;
- (id)followButtonColorModel;
- (void)refreshFollowBtnUI;
- (void)hideRightActionArea;
- (id)moreButtonTargetView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateLabel;

@end
