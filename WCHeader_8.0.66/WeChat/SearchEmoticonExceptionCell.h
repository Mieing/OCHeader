@class EmoticonCellLikeButton, NSString, SightIconView, UILabel;
@protocol EmoticonSearchCollectionComponentDelegate;

@interface SearchEmoticonExceptionCell : UICollectionViewCell

@property (retain, nonatomic) SightIconView *sightIconView;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (retain, nonatomic) EmoticonCellLikeButton *webSearchButton;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL enableWebSearch;
@property (weak, nonatomic) id<EmoticonSearchCollectionComponentDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshView;
- (id)genWebSearchButton;
- (void)onTapWebSearchButton;
- (void).cxx_destruct;

@end
