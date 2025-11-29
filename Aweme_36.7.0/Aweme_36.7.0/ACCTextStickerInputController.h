@class UITextView, NSArray, NSRegularExpression, NSString, ACCThrottle;
@protocol ACCTextStickerInputControllerDelegate;

@interface ACCTextStickerInputController : NSObject

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSArray *mentionExtraInfos;
@property (copy, nonatomic) NSArray *hashtagExtraInfos;
@property (copy, nonatomic) NSArray *hotSpotExtraInfos;
@property (retain, nonatomic) NSRegularExpression *hashTagRegExp;
@property (retain, nonatomic) NSRegularExpression *endWithHashTagRegExp;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastSearchRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastMarkedRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastShouldChangeTextInRange;
@property (copy, nonatomic) NSString *lastShouldChangeTextInRangeText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastShouldChangeTextSelectedRange;
@property (retain, nonatomic) ACCThrottle *updateSearchThrottle;
@property (nonatomic) BOOL ignoreSelectionChangedFlag;
@property (weak, nonatomic) id<ACCTextStickerInputControllerDelegate> delegate;
@property (nonatomic) long long maxHashtagCount;
@property (nonatomic) long long maxMentionCount;
@property (readonly, copy, nonatomic) NSArray *extraInfos;

- (void)appendExtraCharacterWithType:(unsigned long long)a0;
- (id)initWithTextView:(id)a0 initialExtraInfos:(id)a1;
- (void)appendTextExtraWithExtra:(id)a0;
- (void)p_setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateTextView:(id)a0;
- (void)p_setupWithExtraInfos:(id)a0;
- (void)onTextInputValueChangedNotify:(id)a0;
- (void)updateExtraInfos:(id)a0;
- (void)updateSearchKeywordStatus;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_markedRange;
- (BOOL)p_markMentionTextRangeIfNeedWhenProcessDeleteInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)p_isMarked;
- (id)p_plainText;
- (void)p_updateAllExtraInfoAndCallbackChangedWithReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (void)p_replaceCurrentSelectTextWithText:(id)a0;
- (void)p_replaceText:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textUpdatedHander:(id /* block */)a2;
- (void)p_appendMentionWithExtra:(id)a0;
- (void)p_appendHashtagWithExtra:(id)a0;
- (void)p_handlCurrentExtraInfoDidChanged;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_safeTextRangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_updateMentionExtraInfoIfNeedWithReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (void)p_updateHashtagExtraInfo;
- (id)p_resolveHashTags;
- (BOOL)p_containEqualNameHashtagExtra:(id)a0;
- (BOOL)p_handleHashtagKeywordSearchIfMatching;
- (BOOL)p_handleMentionKeywordSearchIfMatching;
- (void)p_callbackDidUpdateSearchKeyword:(id)a0 needSearch:(BOOL)a1 searchType:(unsigned long long)a2;
- (id)p_textRangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_rangeFromTextRange:(id)a0;
- (void)appendExtraCharacterWithType:(unsigned long long)a0 replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)appendTextFromContinueWriting:(id)a0;
- (void)appendHashtagWithExtra:(id)a0 useHashtagSymbol:(BOOL)a1;
- (long long)numberOfExtrasForType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
