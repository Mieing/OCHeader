@class AWEUserModel, AWESkylightCellEntranceConfig, NSString, AWESkylightCellEntranceView, AWEConcernSkylightCellModel;

@interface AWEConcernSkylightUpdateCell : UICollectionViewCell <AWEConcernFollowListUnreadCacheMessage, AWEConcernSkylightCellProtocol>

@property (retain, nonatomic) AWESkylightCellEntranceView *commonEntranceView;
@property (retain, nonatomic) AWESkylightCellEntranceConfig *entranceConfig;
@property (retain, nonatomic) AWEConcernSkylightCellModel *cellModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (void)hideRedDot;
- (void)updateUnreadNumTextConfig;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
