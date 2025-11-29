@class WCFinderSearchContactCellContentView, WCFinderSearchInfo;
@protocol WCFinderSearchContactCellDelegate;

@interface WCFinderSearchContactCell : UITableViewCell

@property (retain, nonatomic) WCFinderSearchInfo *searchInfo;
@property (retain, nonatomic) WCFinderSearchContactCellContentView *cellContentView;
@property (weak, nonatomic) id<WCFinderSearchContactCellDelegate> delegate;

+ (double)cellHeightWith:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubview;
- (void)prepareForReuse;
- (void)updateUIWith:(id)a0 isShowSeparatorLine:(BOOL)a1 shouldHideFollow:(BOOL)a2 useRoundHeader:(BOOL)a3;
- (void)updateUIWith:(id)a0 params:(id)a1;
- (id)getAttributeText:(id)a0;
- (void).cxx_destruct;

@end
