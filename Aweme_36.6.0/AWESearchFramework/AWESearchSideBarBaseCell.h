@class NSDictionary, AWESearchProfileSideBarModuleModel;

@interface AWESearchSideBarBaseCell : UICollectionViewCell

@property (retain, nonatomic) AWESearchProfileSideBarModuleModel *model;
@property (nonatomic) double showTime;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSDictionary *logExtraDic;

+ (id)identifier;

- (void)trackShow;
- (void)setupBasicUI;
- (void)updateShowtime:(double)a0;
- (void)updateLogExtraDic:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cellHeight;
- (void)updateWithModel:(id)a0;

@end
