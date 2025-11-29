@class UIView, NSString, NSArray, UIImageView, IESLivePlaybackCommentPanelViewModel, UIButton, CAGradientLayer, UICollectionView, UIPageControl;
@protocol IESLivePlaybackEmoticonViewDelegate;

@interface IESLivePlaybackBaseEmoticonView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *emoticonCollectionView;
@property (retain, nonatomic) UIPageControl *emoticonPageControl;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *footerLine;
@property (retain, nonatomic) UIView *headerLine;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) UIImageView *emojiIconView;
@property (retain, nonatomic) UIImageView *favoriteEmojiIconView;
@property (retain, nonatomic) NSArray *emoticonModelPages;
@property (weak, nonatomic) IESLivePlaybackCommentPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIButton *deleteBtn;
@property (retain, nonatomic) CAGradientLayer *bottomLayer;
@property (weak, nonatomic) id<IESLivePlaybackEmoticonViewDelegate> delegate;
@property (nonatomic) double sizeHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendBtnClicked:(id)a0;
- (void)deleteBtnClicked:(id)a0;
- (void)setupEmoticonCollectionView;
- (void)setupEmoticonPageControl;
- (void)setupBottomSectionView;
- (void)makeSendButtonActive:(BOOL)a0;
- (void)stoppedScrolling;
- (void)setupEmoticonCollectionViewForNewStyle:(BOOL)a0;
- (void)setupBottomContainerView;
- (void)setupBottomJSBSectionView;
- (id)initWithEmoticonModelPages:(id)a0 viewModel:(id)a1;
- (void)setupForNewStyle;
- (void)setupForJSBNewStyle;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;

@end
