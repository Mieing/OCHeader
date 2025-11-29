@class UILabel, WCFinderLiveTagListCollectionViewConfig;

@interface WCFinderLiveTagListLabelCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isToggle;
@property (retain, nonatomic) WCFinderLiveTagListCollectionViewConfig *config;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })cellSizeWithTitle:(id)a0 config:(id)a1;
+ (struct CGSize { double x0; double x1; })calculateTextSize:(id)a0 config:(id)a1;
+ (id)displayTitle:(id)a0 withLimitCharCount:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithConfig:(id)a0 item:(id)a1;
- (void)updateDarkModeUI;
- (void)toggle;
- (void)unToggle;
- (void).cxx_destruct;

@end
