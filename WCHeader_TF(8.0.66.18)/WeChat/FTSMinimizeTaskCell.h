@class NSString, MinimizeTaskData, AttributeLabel, UIView, NSMutableArray, UIImageView;

@interface FTSMinimizeTaskCell : MMTableViewCell {
    MinimizeTaskData *_searchItem;
    NSMutableArray *_arrKeyword;
    NSString *_searchText;
    AttributeLabel *_titleLabel;
    AttributeLabel *_descLabel;
    AttributeLabel *_detailLabel;
    UIView *_thumbImageView;
    UIImageView *_iconImageView;
    BOOL _isVideoPlay;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateSearchItem:(id)a0 arrKeyword:(id)a1 iconImage:(id)a2 isVideoPlay:(BOOL)a3 searchText:(id)a4;
- (void)updateStatus:(BOOL)a0;
- (void)setLineSpaceForLabel:(id)a0;
- (id)genDisplayImageView;
- (id)getPlayVideoIConView;
- (void).cxx_destruct;

@end
