@class IESECSearchSuggestItem, UIImageView, UILabel, UIView;
@protocol IESECSearchSuggestCellDelegate;

@interface IESECSearchSuggestCell : UITableViewCell {
    UIImageView *_searchIcon;
    UILabel *_suggestionLabel;
    UIImageView *_tagIcon;
    UIImageView *_arrowIcon;
    UIView *_speratorLine;
    IESECSearchSuggestItem *_suggestionItem;
}

@property (weak, nonatomic) id<IESECSearchSuggestCellDelegate> delegate;

- (void)suggestionItemClicked:(id)a0;
- (void)populateButtonClicked:(id)a0;
- (void)updateWithSuggestionItem:(id)a0 sepratorLineHidden:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureSubviews;

@end
