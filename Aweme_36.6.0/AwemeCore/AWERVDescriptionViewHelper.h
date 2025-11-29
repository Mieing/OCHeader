@interface AWERVDescriptionViewHelper : NSObject

+ (void)matchEmoticonForAttributedString:(id)a0;
+ (id)matchEmoticonToAccessibilityLabel:(id)a0;
+ (void)transferToProfileWithURL:(id)a0 userModel:(id)a1;
+ (id)highlightFont;
+ (id)accessibilityValue:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)trackChallengTitleShow:(id)a0 withHashTagId:(id)a1 withGroupId:(id)a2 referString:(id)a3;
+ (void)trackEntherPersonalDetailWithModel:(id)a0 referString:(id)a1;
+ (void)trackEntityWordClick:(id)a0 referString:(id)a1 keyWord:(id)a2 params:(id)a3;
+ (id)getAttributedTextWithModel:(id)a0 referString:(id)a1 textColor:(id)a2 entityWordLongPressHihglightColor:(id)a3 entityWordHighlightColor:(id)a4 highlightColor:(id)a5 context:(id)a6;
+ (id)configAttributedContentTextWithModel:(id)a0 referString:(id)a1 entitySearchWords:(id)a2 textColor:(id)a3 entityWordLongPressHihglightColor:(id)a4 entityWordHighlightColor:(id)a5 highlightColor:(id)a6 context:(id)a7;
+ (id)contentTextStringWithModel:(id)a0 context:(id)a1;
+ (void)linkHighlightTapped:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 model:(id)a2 referString:(id)a3 entitySearchWords:(id)a4;
+ (id)addTextExtrasForAttributedContentText:(id)a0 content:(id)a1 model:(id)a2 entitySearchWords:(id)a3 textExtras:(id)a4 referString:(id)a5 textColor:(id)a6 entityWordLongPressHihglightColor:(id)a7 entityWordHighlightColor:(id)a8 highlightColor:(id)a9 tapHighlightAction:(id /* block */)a10;
+ (void)insertImageCommentPublishPerfixIfNeededWithAttributedString:(id)a0 model:(id)a1 textColor:(id)a2 entityWordHighlightColor:(id)a3 highlightColor:(id)a4 tapHighlightAction:(id /* block */)a5;
+ (void)updateEntityWordUIStyle:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 model:(id)a2 textExtras:(id)a3 extra:(id)a4 entityWordHighlightColor:(id)a5;
+ (void)applyHighlightForAttributedContentText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 hightlightId:(id)a2 hightlightType:(long long)a3 extra:(id)a4 isCommerce:(BOOL)a5 entityWordLongPressHihglightColor:(id)a6 entityWordHighlightColor:(id)a7 highlightColor:(id)a8 tapHighlightAction:(id /* block */)a9;
+ (void)trackChallengTitleClick:(id)a0 withHashTagId:(id)a1 withGroupId:(id)a2 referString:(id)a3;
+ (void)trackEnterTagDetailWithTagId:(id)a0 hashTag:(id)a1 model:(id)a2 referString:(id)a3;
+ (void)drawSearchUnderline:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 extra:(id)a2 entityWordHighlightColor:(id)a3;
+ (void)drawSearchIconSuffix:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 extra:(id)a2 entityWordHighlightColor:(id)a3;
+ (id)bodyFont;
+ (void)addParagraphStyle:(id)a0;

@end
