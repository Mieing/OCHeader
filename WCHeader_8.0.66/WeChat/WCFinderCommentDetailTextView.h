@class WCFinderCommentDetailTextViewContext, NSMutableArray;
@protocol WCFinderCommentDetailTextViewMentionDelegate;

@interface WCFinderCommentDetailTextView : MMGrowTextView

@property (retain, nonatomic) NSMutableArray *mentionEntryArray;
@property (retain, nonatomic) WCFinderCommentDetailTextViewContext *context;
@property (weak, nonatomic) id<WCFinderCommentDetailTextViewMentionDelegate> mentionDelegate;

- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (id)getValidCommentMentionInfoArray;
- (void)handleLastSimpleAppendedWithEntry:(id)a0 changeText:(id)a1 changeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)handleLastSimpleDeleteOrComplexAdditionWithEntry:(id)a0 changeText:(id)a1 changeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned long long)insertMentionContact:(id)a0 atIndex:(unsigned long long)a1;
- (void)clearInvalidMentionEntry;
- (void)updateTextViewCursorToIndex:(unsigned long long)a0;
- (void)updateValidMentionEntryWithInvalidDeletionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)clearAllMentionInfo;
- (void).cxx_destruct;

@end
