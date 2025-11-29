@class UILabel, RichTextView, MMWebImageView;

@interface WCFinderModifyHistoryCardView : MMUIView

@property (retain, nonatomic) UILabel *videoCoverLabel;
@property (retain, nonatomic) UILabel *coverPersonalLabel;
@property (retain, nonatomic) UILabel *coverShareLabel;
@property (retain, nonatomic) UILabel *contentDescLabel;
@property (retain, nonatomic) UILabel *contentShortLabel;
@property (retain, nonatomic) UILabel *postTimeLabel;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) MMWebImageView *shareImageView;
@property (retain, nonatomic) RichTextView *longDescTextView;
@property (retain, nonatomic) RichTextView *shortDescTextView;
@property (retain, nonatomic) RichTextView *editTimeTextView;

+ (id)buildTitleLabel;
+ (id)buildSeparateLine;
+ (void)setUpCoverImageViewFrom:(id)a0 targetImage:(id)a1;
+ (id)downloadFileWithURL:(id)a0 type:(unsigned long long)a1;
+ (void)loadCoverWithFeedRecordInfo:(id)a0 loadBlock:(id /* block */)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentByFeedRecord:(id)a0 imageList:(id)a1;
- (void).cxx_destruct;

@end
