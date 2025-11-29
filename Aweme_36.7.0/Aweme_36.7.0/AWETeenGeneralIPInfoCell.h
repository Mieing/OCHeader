@class AWETeenLynxContainer, NSDictionary, AWETeenGeneralIPAlbumCardModel, NSString;

@interface AWETeenGeneralIPInfoCell : UICollectionViewCell <BDXKitViewLifecycleProtocol, AWETeenGeneralIPInfoMessage, AWETeenGeneralCellProtocol>

@property (retain, nonatomic) AWETeenGeneralIPAlbumCardModel *model;
@property (retain, nonatomic) AWETeenLynxContainer *ipAlbumLynxView;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0;

- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)showLog;
- (void)updateGeneralSpecificAlbum:(long long)a0 progress:(long long)a1;
- (void)p_trackAlbumShow;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
