@class NSDictionary, AWEVideoPlayDanmakuModel, NSString;
@protocol AWEDanmakuOptionBubbleViewDiggInfoProtocol, AWEDanmakuOptionBubbleViewDelegate;

@interface AWEDanmakuPopoverView : UIView <AWEDanmakuPopoverContentViewProtocol>

@property (retain, nonatomic) NSDictionary *elementsMap;
@property (nonatomic) long long diggCount;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (readonly, nonatomic) id<AWEDanmakuOptionBubbleViewDiggInfoProtocol> diggInfo;
@property (nonatomic) double currentBubbleWidth;
@property (weak, nonatomic) id<AWEDanmakuOptionBubbleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)popoverEdgeMargin;
+ (double)popoverContentViewHeight;
+ (double)popoverOptionWidth:(id)a0;

- (void)setupGestureRecognizer;
- (void)postDigAccessibilityNotificationIfNeed;
- (id)initWithElements:(id)a0 diggInfo:(id)a1 danmakuModel:(id)a2;
- (void)triggerDigGuideIfNeed;
- (void)setupWithElementTypes:(id)a0;
- (void)updateDigImageView;
- (void)updateDiggViewAccessibilityLabelIfNeed;
- (void)layoutElement:(id)a0 lastElement:(id)a1 forType:(id)a2;
- (double)elementWidthForType:(id)a0;
- (id)getDigLabelText;
- (BOOL)shouldUpdateDiggViewWidth;
- (double)getDiggLabelWidth;
- (void)onBubbleViewTouchEvent:(id)a0;
- (void)didTapElementType:(id)a0;
- (void)updateDiggInfoIfNeed;
- (double)diggLabelWidthDiff;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)createElement:(id)a0;

@end
