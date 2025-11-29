@class RichTextView, MMUILabel;

@interface WCFinderPostUsualTopicCell : WCFinderTableViewCell

@property (retain, nonatomic) RichTextView *topicTextView;
@property (retain, nonatomic) MMUILabel *useCountLabel;

+ (id)createRichTextView;
+ (id)createLabel;
+ (double)getUsualTopicHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateCellWithTopicInfo:(id)a0;
- (void)layoutElements;
- (void).cxx_destruct;

@end
