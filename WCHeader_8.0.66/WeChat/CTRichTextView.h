@class UIFont, NSString, NSArray, UIView, CTFrameWrap, NSMutableAttributedString, NSMutableArray, UIColor;
@protocol RichTextViewSelectProtocol, ILinkEventExt;

@interface CTRichTextView : MMCPLabel <UIGestureRecognizerDelegate, UIScrollViewDelegate, MMRichTextCoverViewDelegate> {
    NSMutableAttributedString *_attString;
    struct __CTFramesetter { } *_framesetter;
    CTFrameWrap *_frame;
    NSMutableArray *_images;
    NSMutableArray *_colors;
    NSMutableArray *_tempImages;
    BOOL _bUpdateFramesIfNeeded;
    BOOL _bWholeField;
    BOOL _bIsLongPressHandled;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _touchedRect;
}

@property (nonatomic) double fWidth;
@property (nonatomic) double fHeight;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightedRange;
@property (retain, nonatomic) UIFont *highlightedRangeFont;
@property (retain, nonatomic) UIColor *highlightedRangeTextColor;
@property (nonatomic) unsigned long long parserType;
@property (weak, nonatomic) id<ILinkEventExt> linkDelegate;
@property (nonatomic) BOOL bTouchesPassOn;
@property (nonatomic) BOOL bHandleLongPress;
@property (nonatomic) double lineSpace;
@property (retain, nonatomic) UIView<RichTextViewSelectProtocol> *richTextCoverView;
@property (nonatomic) BOOL bSelectable;
@property (nonatomic) BOOL isHighlightedBackgroundStyle;
@property (readonly, nonatomic) NSString *originalContent;
@property (readonly, nonatomic) NSArray *lineRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)baseInit;
- (id)getParserByPaserType:(unsigned long long)a0;
- (id)createParser:(unsigned long long)a0;
- (double)boundingHeightForWidth:(double)a0;
- (void)updateFrameSetting;
- (void)updateFrame;
- (void)updateFramesIfNeeded;
- (void)updateFrames;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)heightForContent:(id)a0;
- (void)setContent:(id)a0;
- (void)setAttributedText:(id)a0;
- (id)attributedText;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)longPressOnLinkEvent:(id)a0;
- (void)longPressOnPhoneEvent:(id)a0;
- (void)longPressOnAddressEvent:(id)a0;
- (void)longPressOnTextEvent:(id)a0;
- (void)longPressOnSearchTopicEvent:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)getSelectRectsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeIntersection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withSecond:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)getStringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeAtIndex:(long long)a0;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 FrontCursor:(BOOL)a1;
- (long long)getTouchIndexWithTouchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getTouchRangeWithTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)getLineHeight;
- (id)getTextString;
- (BOOL)isEmojiLocation:(unsigned long long)a0 bStart:(BOOL)a1;
- (id)delegateView;
- (void).cxx_destruct;

@end
