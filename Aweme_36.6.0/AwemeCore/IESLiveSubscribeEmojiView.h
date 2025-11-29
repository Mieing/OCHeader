@class IESLiveSubscribeEmojiViewModel, NSString, UIImageView, UICollectionView, UILabel, NSDictionary, UIButton;
@protocol IESLiveCommentEmoticonPageViewDelegate;

@interface IESLiveSubscribeEmojiView : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveCommentEmoticonPageViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *guideBackgroundView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIButton *guideButton;
@property (retain, nonatomic) IESLiveSubscribeEmojiViewModel *viewModel;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double slideOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly, nonatomic) unsigned long long selectType;
@property (weak, nonatomic) id<IESLiveCommentEmoticonPageViewDelegate> delegate;
@property (nonatomic) BOOL landscapeMode;
@property (nonatomic) double extraBottomInset;

- (void)p_tapGuideButton;
- (void)updateWithViewModel:(id)a0 isLandscape:(BOOL)a1 slideOffset:(double)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)setupCollectionView;
- (void)setupUI;

@end
