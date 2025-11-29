@class WCFinderSearchContactCellContentView, WCFinderSearchInfo;
@protocol WCFinderMoreLiveSearchContactCellDelegate;

@interface WCFinderMoreLiveSearchContactCell : UITableViewCell

@property (retain, nonatomic) WCFinderSearchInfo *searchInfo;
@property (retain, nonatomic) WCFinderSearchContactCellContentView *cellContentView;
@property (weak, nonatomic) id<WCFinderMoreLiveSearchContactCellDelegate> delegate;

+ (double)cellHeightWith:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubview;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)updateUIWith:(id)a0 isShowSeparatorLine:(BOOL)a1 shouldHideFollow:(BOOL)a2 useRoundHeader:(BOOL)a3;
- (id)getAttributeText:(id)a0;
- (void).cxx_destruct;

@end
