@class NSString, AttributeLabel, UIView, NSMutableArray, FTSFavSearchResultItem;

@interface FTSFavCell : MMTableViewCell {
    FTSFavSearchResultItem *_searchItem;
    NSMutableArray *_arrKeyword;
    NSString *_searchText;
    AttributeLabel *_titleLabel;
    AttributeLabel *_descLabel;
    AttributeLabel *_detailLabel;
    UIView *_thumbImageView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateFavSearchItem:(id)a0 arrKeyword:(id)a1 searchText:(id)a2;
- (void)updateStatus:(BOOL)a0;
- (void)setLineSpaceForLabel:(id)a0;
- (void).cxx_destruct;

@end
