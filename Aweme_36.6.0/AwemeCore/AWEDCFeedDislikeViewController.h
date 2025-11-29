@protocol AWEDCFeedDislikeVCDelegate;

@interface AWEDCFeedDislikeViewController : AWEDoubleColumnDislikeViewController

@property (weak, nonatomic) id<AWEDCFeedDislikeVCDelegate> delegate;
@property (nonatomic) unsigned long long themeStyle;

- (void)addNotification;
- (BOOL)enableUpdateWithHelper;
- (void)dismiss;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (Class)collectionViewCellClass;
- (Class)headerClass;

@end
