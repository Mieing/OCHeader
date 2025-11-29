@class AWEConcernSkylightCellModel, NSString, AWESkylightCellEntranceView;

@interface AWESkylightUnreadCell : UICollectionViewCell <AWEConcernSkylightCellProtocol>

@property (retain, nonatomic) AWESkylightCellEntranceView *commonEntranceView;
@property (retain, nonatomic) AWEConcernSkylightCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)topAvatarCenterXOffset;
+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0;
- (void)showRedDotAnimationWithComplition:(id /* block */)a0;
- (void)hideRedDot;
- (BOOL)canRemoveUnreadLogo;
- (double)tagLabelFontSize;
- (void)configUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
