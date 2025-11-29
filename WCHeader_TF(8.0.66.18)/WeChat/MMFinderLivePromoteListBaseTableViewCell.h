@class UIView, MMFinderLivePromoteListBaseViewItem, MMWebImageView, MMUIButton, MMUILabel;

@interface MMFinderLivePromoteListBaseTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMFinderLivePromoteListBaseViewItem *item;
@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) MMUILabel *titleTagLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL editHidePushButton;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)identifier;

- (void)updateWithViewItem:(id)a0;
- (void)updateHidePushButtonState:(BOOL)a0;
- (void)onActionButtonClicked:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)createUI;
- (BOOL)enableMenuAction;
- (void)configEditMenuButtons;
- (double)preferHeight;
- (double)preferWidth;
- (void)layoutUI;
- (void)categoryItem:(id)a0 onLikeStatusChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
