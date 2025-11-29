@class UILabel, NSString, UIImageView, UIView, MMUIButton, MMTextView;
@protocol MMFinderLiveCreateVoteHeaderTableViewCellDelegate;

@interface MMFinderLiveCreateVoteHeaderTableViewCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) MMUIButton *selectButton;
@property (retain, nonatomic) UIImageView *selectArrowImageView;
@property (retain, nonatomic) MMTextView *questionTextView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *durationContainerView;
@property (retain, nonatomic) UILabel *durationTitleLabel;
@property (retain, nonatomic) UILabel *durationDescLabel;
@property (retain, nonatomic) UIImageView *durationArrowImageView;
@property (weak, nonatomic) id<MMFinderLiveCreateVoteHeaderTableViewCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)TEXTVIEW_FONT;
+ (id)reuseId;
+ (double)cellHeightWithQuestionText:(id)a0 maxWidth:(double)a1;
+ (double)textViewHeightWithQuestionText:(id)a0 maxWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configWithVoteItem:(id)a0;
- (void)endEditing;
- (void)initUI;
- (void)layoutSubviews;
- (double)maxWidthForTextView;
- (double)expectedHeightForTextView;
- (void)didClickSelectButton;
- (void)didTapDurationSelect;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void).cxx_destruct;

@end
