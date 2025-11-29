@class NSArray, NSDictionary, UICollectionView, NSString, AWEIMChatRecommendVideoContext;
@protocol AWEIMChatRecommendVideoContentViewDelegate;

@interface AWEIMChatRecommendVideoContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMChatRecommendVideoCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSDictionary *typeMap;
@property (retain, nonatomic) NSArray *videos;
@property (weak, nonatomic) id<AWEIMChatRecommendVideoContentViewDelegate> delegate;
@property (weak, nonatomic) AWEIMChatRecommendVideoContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)didClickSendButtonAtIndexPath:(id)a0;
- (void)didClickChatButtonAtIndexPath:(id)a0;
- (id)centerCell;
- (void)awemeDidSentAtIndexPath:(id)a0;
- (double)cellRadius;
- (id)startViewForIndexPath:(id)a0;
- (void)p_setupUI;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)scrollToIndexPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (Class)cellClass;

@end
