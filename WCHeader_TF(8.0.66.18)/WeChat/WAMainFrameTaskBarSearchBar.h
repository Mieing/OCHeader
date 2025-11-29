@class NSString, UIImageView, UILabel, UIView;

@interface WAMainFrameTaskBarSearchBar : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *searchBarImageView;
@property (retain, nonatomic) UILabel *searchHintLabel;
@property (copy, nonatomic) NSString *placeHolder;

- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHintColor:(id)a0;
- (void)setSearchBarBackgroundColor:(id)a0;
- (void)setSearchMagicAnimeId:(id)a0;
- (void)refreshSearchPlaceHolder:(id)a0;
- (void)onSearchPlaceHolderUpdate:(id)a0;
- (void).cxx_destruct;

@end
