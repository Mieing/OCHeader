@class AWESearchAdTagContainerViewFrame, UILabel, AWEOriginalAdModel, UIView;

@interface AWESearchAdTagContainerView : UIView

@property (retain, nonatomic) UIView *paidTagBgView;
@property (retain, nonatomic) UIView *otherTagBgView;
@property (retain, nonatomic) UILabel *paidTagLabel;
@property (retain, nonatomic) UILabel *otherTagLabel;
@property (retain, nonatomic) AWEOriginalAdModel *currentAdModel;
@property (retain, nonatomic) AWESearchAdTagContainerViewFrame *cellFrame;

- (void)configTags;
- (id)createTagLabel;
- (void)configWithCellFrame:(id)a0;
- (void)setupBaseConfig;
- (id)createTagBackgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)configLayout;

@end
