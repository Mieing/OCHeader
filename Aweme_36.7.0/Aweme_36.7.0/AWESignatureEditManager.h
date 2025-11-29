@class UITextRange, NSString, NSTimer, UITextView, NSMutableArray, AWEUserModel;
@protocol AWESignatureEditManagerDelegate;

@interface AWESignatureEditManager : NSObject

@property (retain, nonatomic) NSTimer *searchTimer;
@property (copy, nonatomic) id /* block */ searchBlock;
@property (retain, nonatomic) NSMutableArray *mentionTextExtras;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isDeleting;
@property (retain, nonatomic) UITextRange *lastMarkedTextRange;
@property (retain, nonatomic) NSString *lastReplacementText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL shouldAdaptBigFont;
@property (weak, nonatomic) id<AWESignatureEditManagerDelegate> delegate;
@property (retain, nonatomic) UITextView *textView;

- (BOOL)shouldSaveChange;
- (void)p_stopTimer;
- (void)p_startTimer;
- (id)submitTextExtras;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })currentMentionSearchKeywordRange;
- (void)handleWithTextview:(id)a0;
- (void)addHighlightAttributesForText;
- (void)updateMentionTextExtrasWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (void)searchKeywordIfNeededInTextView:(id)a0;
- (id)mentionTextExtraInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateMentionTextExtrasWithInsertText:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addMentionTextExtraWithModel:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)correctStartForExtra:(id)a0 inString:(id)a1 toleration:(long long)a2;
- (BOOL)isNotFoundRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })removePrefixFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_searchMentionKeyword:(id)a0;
- (void)checkSubmitTextExtras;
- (void)p_onSearchTimer;
- (BOOL)isTextExtrasArrayContainsExtra:(id)a0 textExtrasArray:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromTextRange:(id)a0 inTextView:(id)a1;
- (void)initRichTextWithUser:(id)a0;
- (void)trackSubmitTextExtras;
- (void)trackPrefixTriggerEventWithEventName:(id)a0 enterMethod:(id)a1;
- (id)newMentionTextExtrasWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (BOOL)checkLastMultiWhiteSpacesAndNewLinesInTextView:(id)a0;
- (id)copyTextExtraWith:(id)a0;
- (BOOL)p_checkWhiteSpacesAndNewLinesFromIndex:(unsigned long long)a0 inTextView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
