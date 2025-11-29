@class DUXTag, DUXTextTag, NSString, DUXBaseImageView, AWEUserModel, NSTimer, UITableView, DUXButton, NSIndexPath;

@interface AWELeftSideBarRevisitUserEmptyTableViewCell : UITableViewCell <AWELeftSideBarRevisitUserEmptyCellProtocol>

@property (retain, nonatomic) DUXBaseImageView *avatarImgView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) DUXTextTag *titleTag;
@property (retain, nonatomic) DUXTextTag *subTitleTag;
@property (retain, nonatomic) DUXButton *actionButton;
@property (retain, nonatomic) DUXTag *hintTag;
@property (nonatomic) long long currentTime;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) BOOL isLastOne;
@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)emptyCell_configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2 referString:(id)a3;
- (void)emptyCell_cellWillDisplay:(id)a0 atIndexPath:(id)a1 tableView:(id)a2 enterFrom:(id)a3;
- (void)emptyCell_cellDidEndDisplay:(id)a0;
- (void)handleAvatarTapGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setupSubviews;

@end
