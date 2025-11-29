@class UITextView, NSString, IESLiveAnnouncementEditContentChangeButton, UILabel;
@protocol IESLiveAnnouncementEditContentCellDelegate;

@interface IESLiveAnnouncementEditContentCell : IESLiveAnnouncementEditFunctionCell <UITextViewDelegate, IESLiveAnnouncementEditContentChangeButtonDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) IESLiveAnnouncementEditContentChangeButton *changeButton;
@property (retain, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) id<IESLiveAnnouncementEditContentCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithItem:(id)a0;
- (void)setUpEditView;
- (void)updateViewData;
- (void)refreshTipLabelStatus:(long long)a0;
- (void)refreshChangeButtonStats;
- (void)onChangeAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
