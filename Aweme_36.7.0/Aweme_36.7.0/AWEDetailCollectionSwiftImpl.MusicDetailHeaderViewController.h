@interface AWEDetailCollectionSwiftImpl.MusicDetailHeaderViewController : UIViewController <AWEMusicDetailHeaderViewControllerProtocol, AWETabListHeaderViewControllerProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ regionManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stackView;
}

- (id)regionByProtocol:(id)a0;
- (void)onFetchDataEndWithSuccess:(BOOL)a0 response:(id)a1 error:(id)a2;
- (void)onRelatedDataEndWithMusicList:(id)a0;
- (void)setupMusicDetailFailType:(long long)a0;
- (void)configWithHeaderModel:(id)a0;
- (double)heightForHeaderView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
