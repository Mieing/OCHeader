@class RichTextView;

@interface WCFinderPostTopicBubbleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) RichTextView *contentTextView;

+ (id)getStandardRichTextView;
+ (double)getBubbleWidthWithText:(id)a0;
+ (double)getTextViewWidthWithText:(id)a0;

- (void)updateBubbleTips:(id)a0;
- (void)updateBubbleWithTopicInfo:(id)a0;
- (void).cxx_destruct;

@end
