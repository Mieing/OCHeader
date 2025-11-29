@class UIImageView, RichTextView;
@protocol WCFinderOpenFinderEntryTableViewCellDelegate;

@interface WCFinderOpenFinderEntryTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *finderIconImageView;
@property (retain, nonatomic) RichTextView *tipsTextView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderOpenFinderEntryTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long cardIndex;

+ (double)openFinderEntryCellHeightWithTips:(id)a0 screenWid:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateOpenFinderEntryCellWithTips:(id)a0;
- (void)switchToDarkMode:(BOOL)a0;
- (void)onClickContentAction;
- (void).cxx_destruct;

@end
