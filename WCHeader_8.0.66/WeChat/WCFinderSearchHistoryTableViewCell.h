@class FavAttributeCPLabel, UIImageView, UIView, WCFinderSearchSuggestion;
@protocol WCFinderSearchHistoryTableViewCellDelegate;

@interface WCFinderSearchHistoryTableViewCell : UITableViewCell

@property (retain, nonatomic) FavAttributeCPLabel *tipsLabel;
@property (retain, nonatomic) WCFinderSearchSuggestion *record;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) id<WCFinderSearchHistoryTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)rightImageTapAction:(id)a0;
- (void)prepareForReuse;
- (void)updateWithSearchRecord:(id)a0;
- (void).cxx_destruct;

@end
