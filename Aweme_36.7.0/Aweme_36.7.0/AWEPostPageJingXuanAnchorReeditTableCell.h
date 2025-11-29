@class DUXButton;

@interface AWEPostPageJingXuanAnchorReeditTableCell : AWENewPublishTableCell

@property (retain, nonatomic) DUXButton *addButton;
@property (retain, nonatomic) DUXButton *deleteButton;
@property (copy, nonatomic) id /* block */ addBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (nonatomic) BOOL hasAdded;

- (void)deleteButtonClicked;
- (void)addSubviewsForContentView;
- (void)endLoading;
- (void)refreshButtonHidden;
- (void).cxx_destruct;
- (void)startLoading;
- (void)addButtonClicked;

@end
