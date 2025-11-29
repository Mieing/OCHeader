@class NSString, AWEAwemeModel;
@protocol AWEShareRowViewDelegate;

@interface AWEShareRowView : AWEShareCollectionView <AWEShareRowViewProtocol>

@property (nonatomic) BOOL isFirstRow;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) id<AWEShareRowViewDelegate> shareDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)rowHeight;
+ (Class)cellClass;
+ (id)collectionLayout;

- (void)playBounceAnimationAfterDelay:(double)a0;
- (id)initWithItems:(id)a0 hostView:(id)a1;
- (void)updateCell:(id)a0 withItem:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
