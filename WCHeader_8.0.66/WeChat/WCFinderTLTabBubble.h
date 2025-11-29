@class NSArray, RichTextView, WCFinderTimelineRedDotBubbleDisplayInfo;

@interface WCFinderTLTabBubble : UIView

@property (retain, nonatomic) NSArray *iconViews;
@property (retain, nonatomic) RichTextView *textView;
@property (nonatomic) long long bubbleType;
@property (nonatomic) unsigned long long token;
@property (retain, nonatomic) WCFinderTimelineRedDotBubbleDisplayInfo *redDotDisplayInfo;
@property (nonatomic) double displayDuration;
@property (nonatomic) long long style;
@property (nonatomic) double beginExposeTime;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMask:(double)a0;
- (void)prepareForReuse;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 adjustElementSize:(BOOL)a1;
- (void)layoutSubviews;
- (void)adjustArrowForAnchor:(double)a0;
- (void)updateIconUrls:(id)a0 withText:(id)a1 style:(long long)a2 darkBG:(BOOL)a3;
- (void)updateDSLRedDotInfo:(id)a0 darkBG:(BOOL)a1;
- (void).cxx_destruct;

@end
