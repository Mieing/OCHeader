@class MMUIImageView, MMFinderLiveNewAnchorTaskViewModel, FinderLiveQuestInstance, MMUIView, MMUILabel;

@interface MMFinderLiveAnchorTaskStatusCell : UICollectionViewCell

@property (copy, nonatomic) id /* block */ onClick;
@property (retain, nonatomic) FinderLiveQuestInstance *taskItem;
@property (retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM;
@property (nonatomic) long long totalCnt;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) MMUIImageView *checkbox;
@property (retain, nonatomic) MMUILabel *status;
@property (retain, nonatomic) MMUILabel *date;
@property (retain, nonatomic) MMUIView *leftLine;
@property (retain, nonatomic) MMUIView *rightLine;
@property (retain, nonatomic) MMUILabel *actionLabel;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)checkLine;
- (void)layoutSubviews;
- (id)color;
- (void)layoutUI;
- (id)createShapeLayer;
- (void)onClickCell;
- (void).cxx_destruct;

@end
