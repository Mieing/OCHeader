@class RichTextView, MMFinderLiveSensitiveDataItem;

@interface MMFinderLiveSensitiveItemTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) RichTextView *sensitiveTextView;
@property (retain, nonatomic) MMFinderLiveSensitiveDataItem *sensitiveDataItem;

+ (id)identifier;
+ (double)preferHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configEditMenuButtons;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSensitiveTextView;
- (void)updateSensitiveDataItem:(id)a0;
- (void).cxx_destruct;

@end
