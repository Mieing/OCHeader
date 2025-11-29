@class NSString, UICollectionView, MMLiveQcPollQuestion, UICollectionViewFlowLayout;
@protocol MMLiveQcPollResponseDelegate;

@interface MMLiveQcPollPageSheet : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMLiveQcPollQuestion *question;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL firstResponseSelected;
@property (nonatomic) BOOL responseEntered;
@property (weak, nonatomic) id<MMLiveQcPollResponseDelegate> responseDelegate;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQuestion:(id)a0;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)initializeComponents;
- (void).cxx_destruct;

@end
