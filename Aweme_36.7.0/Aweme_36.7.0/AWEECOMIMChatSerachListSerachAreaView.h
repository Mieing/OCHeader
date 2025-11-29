@class AWEECOMIMTextView, NSString, UIImageView, UILabel, UIView;

@interface AWEECOMIMChatSerachListSerachAreaView : UIView <UITextViewDelegate>

@property (retain, nonatomic) AWEECOMIMTextView *textView;
@property (retain, nonatomic) UIImageView *serachIconView;
@property (retain, nonatomic) UIImageView *deleteIconView;
@property (retain, nonatomic) UILabel *serachLabel;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL showSerachBtn;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) id /* block */ textChangeBlock;
@property (copy, nonatomic) id /* block */ textChangeTrackBlock;
@property (copy, nonatomic) id /* block */ clickSerachBlock;
@property (copy, nonatomic) id /* block */ clickClearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSerachText:(id)a0;
- (id)initWithShowSerachBtn:(BOOL)a0 placeholderText:(id)a1;
- (void)onClickDelete;
- (id)initWithShowSerachBtn:(BOOL)a0 shopName:(id)a1 placeholderText:(id)a2;
- (void)onClickSerach;
- (void)onClickSearchWithIsClickKeyboard:(BOOL)a0;
- (void)updatePlaceholderAndDeleteIcon;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;

@end
