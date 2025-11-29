@class IESLiveEmojiTextParser, IESLiveCommentContext, NSMutableArray;

@interface IESLiveCommentWidgetInputHelper : NSObject

@property (retain, nonatomic) IESLiveCommentContext *commentContext;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiParser;
@property (retain, nonatomic) NSMutableArray *atUserArray;
@property (nonatomic) BOOL enableFixRangeOrder;
@property (copy, nonatomic) id /* block */ didRemoveAtUser;
@property (nonatomic) BOOL realMentionEnable;

- (void)atUsersChange;
- (void)addAtUser:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 plainTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)textView:(id)a0 replaceRange:(id)a1 withText:(id)a2;
- (BOOL)updateAtUserRangeOfTextView:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withText:(id)a2;
- (void)updateAtUserRange:(id)a0 with:(id)a1;
- (id)structureContentIn:(id)a0 withPlainText:(id)a1 emoji:(id)a2;
- (id)updateRtfContentWithPlainText:(id)a0;
- (void)updateRangeInAttributed:(id)a0 locationOffset:(long long)a1 lengthOffset:(long long)a2;
- (id)fixed_structureContentIn:(id)a0 withPlainText:(id)a1 emoji:(id)a2;
- (id)initWithCommentContext:(id)a0 diContext:(id)a1;
- (void)addAtUser:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAtUser:(id)a0 inTextView:(id)a1;
- (BOOL)textView:(id)a0 containsAtUserInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)textView:(id)a0 addAtUser:(id)a1 byReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 text:(id)a3 textSuffix:(id)a4;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
