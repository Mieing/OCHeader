@class AWEIMFacePuzzleAnsweringProcessQuestionAreaViewState, NSString, UIImageView, UICollectionView, UILabel, UIView, NSMutableArray;

@interface AWEIMFacePuzzleAnsweringProcessQuestionAreaView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *binds;
@property (weak, nonatomic) AWEIMFacePuzzleAnsweringProcessQuestionAreaViewState *uiState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_initProps;
- (id)initWithUIState:(id)a0;
- (void)p_addSubViews;
- (void)p_addBinds;
- (void)p_addConStraints;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
