@class UILabel, AWEStudioCaptionModel;
@protocol AWECaptionOptCellDelegate;

@interface AWECaptionOptCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEStudioCaptionModel *captionModel;
@property (retain, nonatomic) UILabel *captionLabel;
@property (nonatomic) BOOL textHighlighted;
@property (weak, nonatomic) id<AWECaptionOptCellDelegate> delegate;

+ (struct CGSize { double x0; double x1; })dynamicCellSizeWithCaptionModel:(id)a0;
+ (id)captionCalculateLabel;
+ (id)identifier;

- (void)updateCellHeight;
- (void)configCellWithCaptionModel:(id)a0;
- (void)configCaptionHighlight:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
