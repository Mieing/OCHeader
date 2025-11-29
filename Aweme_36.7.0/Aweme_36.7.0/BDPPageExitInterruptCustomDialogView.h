@class NSString, UICollectionView, UIImageView, UILabel, UIView, NSArray;
@protocol BDPAlertViewUpdateUIFromCustomViewDelegate;

@interface BDPPageExitInterruptCustomDialogView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, BDPAlertViewCustomViewDelegate>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *hasMoreView;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL isRequestingMore;
@property (retain, nonatomic) NSString *pageID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *contentArray;
@property (nonatomic) BOOL showHasMore;
@property (copy, nonatomic) id /* block */ hasMoreClickBlock;
@property (copy, nonatomic) id /* block */ itemClickBlock;
@property (weak, nonatomic) id<BDPAlertViewUpdateUIFromCustomViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)storageLimitShowDateWithUniqueID:(id)a0 withType:(id)a1;
+ (id)limitSaveKeyWithUniqueID:(id)a0 withType:(id)a1;
+ (BOOL)checkLimit:(long long)a0 WithUniqueID:(id)a1 withType:(id)a2;

- (void)updateAlertViewUpdateUIFromCustomViewDelegate:(id)a0;
- (double)getCustomDialogViewHeight;
- (void)setTitleUI;
- (void)setCollectionViewUI;
- (void)setHasMoreUI;
- (void)setCollectionViewUILayout;
- (void)hasMoreClick;
- (void)stopRotation;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (void)setupUI;
- (void)startRotation;

@end
