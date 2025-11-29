@class NSString, AWEIMConversationContext, UICollectionView, AWEIMEmoticonRelyListDataSource;
@protocol AWEIMMessageInteractiveUserDelegate;

@interface AWEIMEmoticonRelyListCollectionViewCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *emoticonCollectionView;
@property (retain, nonatomic) UICollectionView *replyUserCollectionView;
@property (retain, nonatomic) AWEIMEmoticonRelyListDataSource *dataSource;
@property (nonatomic) unsigned long long currentIndex;
@property (weak, nonatomic) id<AWEIMMessageInteractiveUserDelegate> delegate;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)p_updateLayout;
- (void)updateWithNewIndex:(unsigned long long)a0;
- (void)renderWithMessage:(id)a0 initialKey:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
