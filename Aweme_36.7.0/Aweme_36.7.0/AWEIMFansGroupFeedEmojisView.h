@class NSArray, UICollectionView, NSString, UILabel;
@protocol AWEIMFansGroupFeedEmojisViewDelegate;

@interface AWEIMFansGroupFeedEmojisView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLibel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL hasChatBg;
@property (retain, nonatomic) NSArray *emoticonModels;
@property (weak, nonatomic) id<AWEIMFansGroupFeedEmojisViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;

- (void)__setupUI;
- (void)configWithModels:(id)a0;
- (void)updateEmojiBgWithChatHasBgImg:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;

@end
