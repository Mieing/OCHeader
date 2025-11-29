@class UILabel, AWEStudioCaptionModel;

@interface ACCModernAutoCaptionItemCell : UITableViewCell

@property (retain, nonatomic) AWEStudioCaptionModel *captionModel;
@property (retain, nonatomic) UILabel *captionLabel;
@property (nonatomic) BOOL textHighlighted;

+ (struct CGSize { double x0; double x1; })dynamicCellSizeWithCaptionModel:(id)a0;
+ (id)captionCalculateLabel;
+ (id)identifier;

- (void)configWithCaptionModel:(id)a0;
- (void)updateWithTextHighlight:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
