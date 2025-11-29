@class SolitaireItem, NSString, MMGrowTextView, UIView, MMUILabel;
@protocol SolitaireDisplayTableViewCellDelegate;

@interface SolitaireDisplayTableViewCell : MMTableViewCell <MMGrowTextViewDelegate, UITextViewDelegate>

@property (retain, nonatomic) MMUILabel *orderNumberLabel;
@property (retain, nonatomic) MMGrowTextView *contentGrowTextView;
@property (retain, nonatomic) UIView *contentTextContainerView;
@property (retain, nonatomic) SolitaireItem *solitaireItem;
@property (copy, nonatomic) NSString *indexStr;
@property (weak, nonatomic) id<SolitaireDisplayTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureCellWith:(id)a0 withIndexStr:(id)a1;
- (void)textViewBecomeFirstResponder;
- (BOOL)isExample;
- (id)getGrowTextView;
- (void)layoutSubviews;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)TextViewDidEnter:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)keyboardWillShow:(double)a0;
- (void)TextViewDidDeleteToNil;
- (void)TextViewHeightDidChanged:(id)a0;
- (void).cxx_destruct;

@end
