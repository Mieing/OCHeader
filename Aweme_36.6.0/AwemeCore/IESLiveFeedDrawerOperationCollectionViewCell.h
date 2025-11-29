@class NSString, FeedItem;

@interface IESLiveFeedDrawerOperationCollectionViewCell : UICollectionViewCell <IESLiveFeedDrawerOperationCellProtocol>

@property (retain, nonatomic) FeedItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)update:(id)a0 fallbackURL:(id)a1;
- (void)hybridViewVisiablity:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
