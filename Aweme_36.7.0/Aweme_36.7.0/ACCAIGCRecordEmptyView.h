@class ACCAIGCRecordListDataSource, ACCAIGCRecordUserBannerCell, UIImageView, UICollectionView, UILabel, UIView, ACCAIGCRecordListFooterView;

@interface ACCAIGCRecordEmptyView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *emptyContentView;
@property (retain, nonatomic) UIImageView *emptyView;
@property (retain, nonatomic) UILabel *emptylabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *findlabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCAIGCRecordListFooterView *footerView;
@property (retain, nonatomic) ACCAIGCRecordListDataSource *dataSource;
@property (nonatomic) BOOL isFromInspiration;
@property (retain, nonatomic) ACCAIGCRecordUserBannerCell *bannerCell;

- (void)bindObserver;
- (BOOL)shouldUseAICreationUIStyle;
- (BOOL)shouldUseLightModeUI;
- (id)initWithEnterFromInspiration:(BOOL)a0 dataSource:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLabel;

@end
