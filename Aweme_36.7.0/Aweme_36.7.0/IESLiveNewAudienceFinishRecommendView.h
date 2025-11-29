@class NSArray, NSTimer, UICollectionView, NSString;
@protocol IESLivePlayerProtocol;

@interface IESLiveNewAudienceFinishRecommendView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *recommendList;
@property (readonly, nonatomic) BOOL isInSplitMode;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (nonatomic) long long maxNumOfCards;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (nonatomic) BOOL isPreviewing;
@property (retain, nonatomic) NSTimer *waitTimer;
@property (copy, nonatomic) id /* block */ cellRenderFinishBlock;
@property (copy, nonatomic) id /* block */ onClickRoom;
@property (retain, nonatomic) UICollectionView *colllectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_renderView;
- (void)stopPlayPreview;
- (long long)numOfCollectionViewShouldShow:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
