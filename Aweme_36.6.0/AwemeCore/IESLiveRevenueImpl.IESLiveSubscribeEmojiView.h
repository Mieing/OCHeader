@class NSDictionary;

@interface IESLiveRevenueImpl.IESLiveSubscribeEmojiView : UICollectionViewCell <IESLiveCommentEmoticonPageViewProtocol, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* function */ trackParams;
    void /* unknown type, empty encoding */ $__lazy_storage_$_landscapeMode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extraBottomInset;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideButton;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slideOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectType;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, copy) NSDictionary *trackParams;
@property (nonatomic) BOOL landscapeMode;
@property (nonatomic) double extraBottomInset;
@property (nonatomic) unsigned long long selectType;

- (void)p_tapGuideButton;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
