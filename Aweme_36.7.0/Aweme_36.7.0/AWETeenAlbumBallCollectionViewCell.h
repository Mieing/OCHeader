@class AWETeenLynxContainer, NSString, AWETeenAlbumResourceGroupCellModel, AWETeenDiscoverChannelContext;

@interface AWETeenAlbumBallCollectionViewCell : UICollectionViewCell <BDXKitViewLifecycleProtocol>

@property (retain, nonatomic) AWETeenLynxContainer *lynxContainer;
@property (retain, nonatomic) AWETeenAlbumResourceGroupCellModel *model;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;
@property (nonatomic) double lastWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0 constraintWidth:(double)a1;

- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)configWithModel:(id)a0 context:(id)a1;
- (void)p_rotated:(id)a0;
- (void)cellShowLog;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
