@class FavAttributeCPLabel, UIImageView, UIView, WCFinderSearchSuggestion;
@protocol WCFinderMoreLiveSearchHistoryTableViewCellDelegate;

@interface WCFinderMoreLiveSearchHistoryTableViewCell : UITableViewCell

@property (retain, nonatomic) FavAttributeCPLabel *tipsLabel;
@property (retain, nonatomic) WCFinderSearchSuggestion *record;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) id<WCFinderMoreLiveSearchHistoryTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)rightImageTapAction:(id)a0;
- (void)prepareForReuse;
- (void)updateWithSearchRecord:(id)a0;
- (void).cxx_destruct;

@end
