@class NSString, NSDictionary, UIImageView, UILabel, UIView, AWEVideoPlayDanmakuModel;
@protocol AWEDanmakuOptionBubbleViewDiggInfoProtocol, AWEDanmakuOptionBubbleViewDelegate;

@interface AWEDanmakuOptionBubbleView : UIView <AWEDanmakuPopoverContentViewProtocol>

@property (retain, nonatomic) NSDictionary *elementsMap;
@property (retain, nonatomic) id<AWEDanmakuOptionBubbleViewDiggInfoProtocol> diggInfo;
@property (retain, nonatomic) UIView *digView;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UIImageView *digImageView;
@property (retain, nonatomic) UIView *replyView;
@property (retain, nonatomic) UIImageView *replyIconView;
@property (retain, nonatomic) UILabel *replyLabel;
@property (retain, nonatomic) UIView *reportView;
@property (retain, nonatomic) UILabel *reportLabel;
@property (retain, nonatomic) UIImageView *reportImageView;
@property (retain, nonatomic) UIView *deleteView;
@property (retain, nonatomic) UILabel *deleteLabel;
@property (retain, nonatomic) UIImageView *deleteImageView;
@property (nonatomic) long long diggCount;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (nonatomic) double currentBubbleWidth;
@property (weak, nonatomic) id<AWEDanmakuOptionBubbleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)setupSeparatorForElement:(id)a0;
- (double)diggLabelWidthDiff;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)createElement:(id)a0;
- (id)createSeparator;

@end
