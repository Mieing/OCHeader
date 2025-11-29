@class NSArray, UICollectionView, NSString, UILabel, UIView, UICollectionViewFlowLayout;
@protocol WCFinderPanelMultiImageCommentViewDelegate;

@interface WCFinderPanelMultiImageCommentView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) unsigned long long commentsCount;
@property (retain, nonatomic) NSArray *imagesComments;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (weak, nonatomic) id<WCFinderPanelMultiImageCommentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)adjustUILayout;
- (void)updateWithCommentsCount:(unsigned long long)a0 topCommentList:(id)a1 width:(double)a2;
- (id)commentIDListForReport;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
