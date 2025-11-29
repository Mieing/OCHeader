@class UITextRange, NSString, NSTimer, UITextView, NSMutableArray, AWEUserModel;
@protocol AWEShareToStoryMentionHandlerDelegate;

@interface AWEShareToStoryMentionHandler : NSObject <AWEShareToStoryMentionUserListDataDelegate>

@property (retain, nonatomic) NSTimer *searchTimer;
@property (copy, nonatomic) id /* block */ searchBlock;
@property (retain, nonatomic) NSMutableArray *mentionTextExtras;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isDeleting;
@property (retain, nonatomic) UITextRange *lastMarkedTextRange;
@property (retain, nonatomic) NSString *lastReplacementText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL hasSearchRemindTextShown;
@property (weak, nonatomic) id<AWEShareToStoryMentionHandlerDelegate> delegate;
@property (retain, nonatomic) UITextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)string:(id)a0 isSpaceAtIndex:(long long)a1;
- (void)p_stopTimer;
- (void)p_startTimer;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromTextRange:(id)a0;
- (long long)quickShareInputTitleMaxLength;
- (void)initRichTextWithTextExtra:(id)a0;
- (void)removeSearchRemindTextIfNeeded:(id)a0;
- (id)searchRemindText;
- (id)submitTextExtras;
- (void)adjustSearchRemindTextAttributeForTextView:(id)a0;
- (void)updateEditViewWithString:(id)a0 textView:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (void)removeUserFromMentionTextExtras:(id)a0 inTextView:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })currentMentionSearchKeywordRange;
- (void)handleWithTextview:(id)a0;
- (void)adjustSelectionPositionForTextView:(id)a0;
- (void)addHighlightAttributesForText;
- (void)updateMentionTextExtrasWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (void)addSearchRemindTextIfNeeded:(id)a0;
- (void)searchKeywordIfNeededInTextView:(id)a0;
- (id)mentionTextExtraInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)lengthOfTextExtra:(id)a0;
- (void)updateMentionTextExtrasWithInsertText:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addMentionTextExtraWithModel:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)correctStartForExtra:(id)a0 inString:(id)a1 toleration:(long long)a2;
- (BOOL)isNotFoundRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })removePrefixFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_searchMentionKeyword:(id)a0;
- (void)checkSubmitTextExtras;
- (void)p_onSearchTimer;
- (void)resetMentionUserListToDefault;
- (BOOL)isTextExtrasArrayContainsExtra:(id)a0 textExtrasArray:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromTextRange:(id)a0 inTextView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
