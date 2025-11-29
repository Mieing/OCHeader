@class NSString, UIImageView, UILabel, UIView;
@protocol AWECloudAlbumTableViewCellDelegateProtocol;

@interface AWECloudAlbumTableViewCell : UITableViewCell <AWECloudAlbumTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UIImageView *plusIcon;
@property (retain, nonatomic) UIImageView *selectedView;
@property (retain, nonatomic) UIView *titleViewContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) unsigned long long cellType;
@property (weak, nonatomic) id<AWECloudAlbumTableViewCellDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)makeConstraint;
- (void)updateSelectedStatus:(id)a0;
- (void)onCellClicked:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
