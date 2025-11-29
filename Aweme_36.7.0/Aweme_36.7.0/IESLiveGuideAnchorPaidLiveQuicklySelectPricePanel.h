@class NSArray, NSString, UITextField, UICollectionView, UIView, UILabel, UIButton;

@interface IESLiveGuideAnchorPaidLiveQuicklySelectPricePanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *defaultPrice;
@property (copy, nonatomic) NSArray *recommendedPrices;
@property (copy, nonatomic) id /* block */ submitPriceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitWithPrice:(id)a0 isSelected:(BOOL)a1;
- (void)textFieldEndEditing;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)submit;
- (void)setup;
- (void)tapped:(id)a0;

@end
