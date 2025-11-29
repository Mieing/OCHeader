@class UIColor, NSArray, NSString, WCFinderHighlightedInfoModel, NSMutableAttributedString, NSMutableArray;
@protocol WCFinderFilterTextViewDelegate;

@interface WCFinderFilterTextView : MMGrowTextView

@property (nonatomic) double cursorPosition;
@property (nonatomic) BOOL shouldMoveCursor;
@property (retain, nonatomic) NSArray *topicRangeArray;
@property (retain, nonatomic) NSArray *mentionRangeArray;
@property (retain, nonatomic) NSArray *invalidCharacterArray;
@property (retain, nonatomic) NSMutableAttributedString *attributeStr;
@property (retain, nonatomic) NSMutableArray *mentionContactArray;
@property (retain, nonatomic) UIColor *attributeTextColor;
@property (retain, nonatomic) UIColor *attributeBgColor;
@property (retain, nonatomic) NSString *lastText;
@property (retain, nonatomic) WCFinderHighlightedInfoModel *lastHighlightedModel;
@property (nonatomic) unsigned long long topicTextLength;
@property (nonatomic) unsigned long long tagNumber;
@property (nonatomic) unsigned long long mentionUserLimitNumber;
@property (nonatomic) BOOL forbidWXEmoji;
@property (nonatomic) BOOL forbidEmoji;
@property (retain, nonatomic) NSMutableArray *validCharacterArray;
@property (nonatomic) BOOL shouldHelpMovingCursor;
@property (nonatomic) BOOL disableMentionConatct;
@property (weak, nonatomic) id<WCFinderFilterTextViewDelegate> textViewDelegate;

+ (BOOL)isCharacters:(id)a0;
+ (id)getMentionedNicknameArrayWithText:(id)a0;

- (id)initWithOriginHeight:(double)a0;
- (void)UITextViewTextDidChangeNotification:(id)a0;
- (void)_onTextChange:(id)a0;
- (BOOL)isLastCharacterAlphaNumeric:(id)a0;
- (void)triggerUpdateTopicModel;
- (id)getInvalidStringContent;
- (BOOL)isvalidMentionContactName:(id)a0;
- (id)_getUpdateTopicModel;
- (void)updateAttitudeContent;
- (void)updateCursorPosition;
- (float)unicodeLengthOfString:(id)a0;
- (void)setAttributeHighlightTextColor:(id)a0;
- (void)updateAttributeBkColor:(id)a0;
- (id)attriStrUseTagModelWithStr:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstEmojiRange:(id)a0;
- (BOOL)containInWhiteBlack:(id)a0;
- (id)getTopicQueryString;
- (double)getCursorRelativePosition;
- (double)getCurrentCursorPointX;
- (struct CGPoint { double x0; double x1; })getCurrentCursorPoint;
- (BOOL)becomeFirstResponder;
- (void)replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 text:(id)a1;
- (void)addWellSymbolToTextView;
- (BOOL)textHasEnoughTagRange;
- (BOOL)textHadEnoughMentionUser;
- (id)genTextToXML;
- (id)getMentionedNicknameArray;
- (id)getTopicArray;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)contactAttrAtTextView:(id)a0 atIndex:(long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)updateMentionContactArray:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getConflictMentionRangeFromSelectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)reloadMentionContactArray;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getTopicRangeWhereCursorIn;
- (void).cxx_destruct;

@end
