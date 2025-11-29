@class AWEPlaylistInfoModel;

@interface AWEMusicStreamingImpl.MusicPlaylistEditViewController : UIViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_editedModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_itemList;
}

@property (nonatomic) BOOL isFromPlaylistDetail;
@property (nonatomic) BOOL isOfflineMode;
@property (nonatomic, retain) AWEPlaylistInfoModel *playlistInfo;
@property (nonatomic) BOOL isMiniLuna;

- (void)backAction;
- (void)saveAction;
- (id)initWithPlaylistInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
