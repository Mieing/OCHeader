@interface FavFileDetailViewController : FileDetailViewController {
    unsigned int m_favId;
}

@property (nonatomic) BOOL needReload;

- (id)initWithFavItem:(id)a0;
- (id)initWithFavItem:(id)a0 LogicController:(id)a1;
- (id)initWithFavDataWrap:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setDisableAutoDownload;

@end
