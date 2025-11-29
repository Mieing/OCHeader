@class NSIndexPath, NSString, MMGrowTextView, CAShapeLayer, MMUIButton, MMFinderLiveQuickReplyModel;

@interface MMFinderLiveSetQuickReplyTableViewCell : UITableViewCell <MMGrowTextViewDelegate, UITextViewDelegate>

@property (retain, nonatomic) MMGrowTextView *textView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) MMUIButton *cleanButton;
@property (retain, nonatomic) MMFinderLiveQuickReplyModel *item;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ cleanBlock;
@property (copy, nonatomic) id /* block */ textViewDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)makeFirstResponder;
- (void)createUI;
- (void)dealloc;
- (void)layoutUI;
- (void)compleEdit;
- (void)textViewDidChange:(id)a0;
- (void)fixTopicText:(BOOL)a0;
- (void)onClickcleanButton:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;

@end
