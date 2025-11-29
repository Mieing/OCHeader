@class NSString;

@interface AFDRichAwemeFullPageHeaderDescriptionViewHelper : NSObject <AFDRichAwemeFullPageHeaderDescriptionViewHelperProtocol>

@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)matchEmoticonForAttributedString:(id)a0;
+ (id)matchEmoticonToAccessibilityLabel:(id)a0;
+ (void)transferToProfileWithURL:(id)a0 userModel:(id)a1;
+ (id)getBodyAttributedTextWithModel:(id)a0 referString:(id)a1;
+ (id)getTitleTextWithModel:(id)a0;
+ (id)hotSpotTagColor;
+ (id)configTimeLabelAttributedStringWithModel:(id)a0;
+ (id)timeLabelTextFont;
+ (id)timeLabelTextColor;
+ (long long)_offsetWithModel:(id)a0;
+ (id)_getDescriptionBodyAttributedTextWithModel:(id)a0;
+ (id)_highlishtModelsForAttributedString:(id)a0 model:(id)a1 offset:(long long)a2 referString:(id)a3;
+ (long long)_offsetAfterMatchEmotionForAttributedString:(id)a0;
+ (void)_handleTapWithHighlightModel:(id)a0 model:(id)a1 referString:(id)a2;
+ (void)_handleTapSearchWithContent:(id)a0 model:(id)a1 referString:(id)a2;
+ (double)bodyFontLineHeightRatio;
+ (id)getTitleAttributedTextWithModel:(id)a0 referString:(id)a1 entitySearchWords:(id)a2;
+ (id)getBodyAttributedTextWithModel:(id)a0 referString:(id)a1 entitySearchWords:(id)a2;
+ (void)insertProductLabelIfNeededWithAttributedString:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3;
+ (void)registerHighlightColorForThemeStyle;
+ (id)EntityWordLongPressHihglightColor;
+ (id)EntityWordHighlightColor;
+ (id)hotSpotTagFont:(BOOL)a0;
+ (id)accessibilityValue:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)insertImageCommentPublishPerfixIfNeededWithAttributedString:(id)a0 model:(id)a1 tapHighlightAction:(id /* block */)a2;
+ (void)trackChallengTitleShow:(id)a0 withHashTagId:(id)a1 withGroupId:(id)a2 referString:(id)a3;
+ (void)updateEntityWordUIStyle:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 model:(id)a2 isTitle:(BOOL)a3 textExtras:(id)a4 extra:(id)a5;
+ (void)trackHotSpotTag:(id)a0 referString:(id)a1 keyWord:(id)a2 actionType:(id)a3;
+ (void)applyHighlightForAttributedContentText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 hightlightId:(id)a2 hightlightType:(long long)a3 extra:(id)a4 isCommerce:(BOOL)a5 isTitle:(BOOL)a6 tapHighlightAction:(id /* block */)a7;
+ (void)registerAttributedContentTextColorIfNeeded;
+ (id)configAttributedContentTextWithModel:(id)a0 offset:(long long)a1 referString:(id)a2 isTitle:(BOOL)a3 entitySearchWords:(id)a4;
+ (id)contentTextStringWithModel:(id)a0;
+ (void)linkHighlightTapped:(id)a0 model:(id)a1 referString:(id)a2 entitySearchWords:(id)a3;
+ (id)addTextExtrasForAttributedContentText:(id)a0 content:(id)a1 model:(id)a2 isTitle:(BOOL)a3 entitySearchWords:(id)a4 textExtras:(id)a5 withOffset:(long long)a6 referString:(id)a7 tapHighlightAction:(id /* block */)a8;
+ (void)trackEntherPersonalDetailWithModel:(id)a0 referString:(id)a1;
+ (void)trackChallengTitleClick:(id)a0 withHashTagId:(id)a1 withGroupId:(id)a2 referString:(id)a3 subType:(long long)a4;
+ (void)__trackEnterTagDetailWithTagId:(id)a0 hashTag:(id)a1 model:(id)a2 referString:(id)a3;
+ (void)trackEntityWordClick:(id)a0 referString:(id)a1 keyWord:(id)a2 params:(id)a3;
+ (void)drawSearchUnderline:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 extra:(id)a2;
+ (void)_matchEmoticonForTextViewAttributedString:(id)a0;
+ (void)drawReplyIconIfNeededForContent:(id)a0;
+ (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributeString:(id)a1;
+ (void)drawSearchIconSuffix:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 extra:(id)a2 isTitle:(BOOL)a3;
+ (id)_highlishtModelsForAttributedString:(id)a0 model:(id)a1 offset:(long long)a2;
+ (id)titleFont;
+ (id)highlightColor;
+ (id)bodyFont;
+ (void)addParagraphStyle:(id)a0;

- (void).cxx_destruct;

@end
