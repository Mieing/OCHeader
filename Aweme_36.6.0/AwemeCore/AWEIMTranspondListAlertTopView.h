@class UIView, NSString, NSArray, UIImageView, AWEUserNameLabel, YYLabel, UICollectionView, UILabel;

@interface AWEIMTranspondListAlertTopView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEUserNameLabel *userNameLabel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIImageView *videoCoverImage;
@property (retain, nonatomic) UIImageView *verifiedLogoView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataList;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithShareModels:(id)a0;
- (void)p_setCoverWithShareImpl:(id)a0;
- (void)isSendToUsers:(BOOL)a0;
- (void)p_refreshUIWithShareModel:(id)a0;
- (void)configWithShareModels:(id)a0 shareImpl:(id)a1;
- (struct CGSize { double x0; double x1; })getCoverImageViewSize;
- (struct CGSize { double x0; double x1; })getContentLabelViewSize;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
