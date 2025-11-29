@class RichTextView;

@interface WCTogetherTextFeedCell : WCTogetherBaseFeedCell

@property (retain, nonatomic) RichTextView *richTextView;

+ (id)cellIdentifier;
+ (id)createRichTextView;
+ (double)heightForItemContentViewWithViewItem:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)contentDidTap;
- (void).cxx_destruct;

@end
