@class NSString, MMUILabel, MMUIButton;
@protocol MiniTaskCollectionHeaderViewDelegate;

@interface MiniTaskCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *editButton;
@property (retain, nonatomic) MMUIButton *deleteAllButton;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (weak, nonatomic) id<MiniTaskCollectionHeaderViewDelegate> delegate;
@property (nonatomic) long long section;
@property (retain, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithSectionModel:(id)a0;
- (void)onSelectAtDeleteAll;
- (void)onSelectAtBeginEdit;
- (void)onSelectAtEndEdit;
- (void).cxx_destruct;

@end
