@class DUXAlertDialog, UICollectionView, UILabel, UIView, UIButton;
@protocol ACCAIGCRecordListHeaderViewDelegate;

@interface ACCAIGCRecordListHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) DUXAlertDialog *deleteAlertConfirmView;
@property (retain, nonatomic) UIView *deleteContainView;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *selectLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (weak, nonatomic) id<ACCAIGCRecordListHeaderViewDelegate> delegate;

- (void)deleteButtonClicked;
- (BOOL)shouldUseLightModeUI;
- (void)selectLabelClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
