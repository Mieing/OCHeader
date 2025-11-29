@class UIImageView, UILabel, UIView, UIButton;
@protocol BtnClickDelegate, XPlayBusinessGroupInfo;

@interface AWEBatManGroupItemCell : UITableViewCell

@property (retain, nonatomic) UIImageView *groupIconImageView;
@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UILabel *groupMemberCountLabel;
@property (retain, nonatomic) UILabel *conditionLabel;
@property (retain, nonatomic) UIView *tagsView;
@property (retain, nonatomic) UIButton *joinGroupBtn;
@property (nonatomic) int index;
@property (retain, nonatomic) id<XPlayBusinessGroupInfo> groupInfo;
@property (weak, nonatomic) id<BtnClickDelegate> delegate;

- (void)setItemMode:(id)a0;
- (void)setPortaitUI;
- (void)genTagView;
- (id)createTagView:(id)a0;
- (void)clickJoinGroup;
- (id)initWithGroupInfo:(id)a0 andWithIndex:(int)a1 andWithContentWith:(double)a2 andIsLandscape:(BOOL)a3;
- (void).cxx_destruct;
- (void)setupUI;

@end
