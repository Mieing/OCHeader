@class UILabel, UIImageView, AWEVideoCoverEvaluateAiDetailModel;

@interface AWEVideoCoverEvaluateAiSuggestCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *suggestLabel;
@property (retain, nonatomic) UIImageView *warningImageView;
@property (retain, nonatomic) UILabel *captionLabel;
@property (retain, nonatomic) UIImageView *caseImageView;
@property (retain, nonatomic) UIImageView *expandedIcon;
@property (retain, nonatomic) AWEVideoCoverEvaluateAiDetailModel *detailModel;
@property (copy, nonatomic) id /* block */ expandedBlock;

+ (struct CGSize { double x0; double x1; })sizeForDetail:(id)a0;

- (void)updateWithDetail:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tapAction;

@end
