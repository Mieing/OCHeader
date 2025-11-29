@class AWECaptionOptTextView, NSIndexPath, NSString, UIView, AWEStudioCaptionModel, ACCAnimatedButton;
@protocol AWECaptionOptCellDelegate;

@interface AWECaptionOptTableViewCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) AWEStudioCaptionModel *captionModel;
@property (retain, nonatomic) AWECaptionOptTextView *captionTextView;
@property (retain, nonatomic) UIView *captionBgView;
@property (retain, nonatomic) ACCAnimatedButton *audioPlayButton;
@property (nonatomic) BOOL shouldDeleteInLine;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectRange;
@property (nonatomic) BOOL textSelected;
@property (copy, nonatomic) NSString *changedText;
@property (weak, nonatomic) id<AWECaptionOptCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ textFieldWillReturnBlock;
@property (copy, nonatomic) id /* block */ textFieldDeleteInLineHeadBlock;
@property (copy, nonatomic) id /* block */ audioPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configCellWithCaptionModel:(id)a0 indexPath:(id)a1;
- (void)switchEditMode:(BOOL)a0;
- (void)updateCursorPositon:(long long)a0;
- (void)configCaptionHighlight:(BOOL)a0;
- (BOOL)hasValidText:(id)a0;
- (id)attributesDic;
- (void)updateCellHeightAndShouldBeginUpdate:(BOOL)a0 indexPath:(id)a1;
- (void)p_textViewDeleteBackward:(id)a0;
- (void)audioPlayButtonClicked;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;
- (double)dynamicCellHeight;

@end
