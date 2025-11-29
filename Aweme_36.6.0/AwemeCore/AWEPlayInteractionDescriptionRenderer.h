@class AWEPlayInteractionDescriptionElementConfig, AWEPlayInteractionDescriptionContext, AWEPlayInteractionDescriptionModifyElement, MASConstraint, UIView, CAGradientLayer, UIScrollView, AWEPlayInteractionDescriptionRenderConstraintsInfo, NSString, NSAttributedString, AWEPlayInteractionDescriptionRenderLinesNumberInfo, AWEPlayInteractionDescriptionLabel, AWEPlayInteractionDescriptionTextAction, YYLabel, AWEPlayInteractionTruncationTokenModel;

@interface AWEPlayInteractionDescriptionRenderer : NSObject <AWEPlayInteractionComponentGlobalPriorityComponentProtocol>

@property (weak, nonatomic) AWEPlayInteractionDescriptionModifyElement *element;
@property (retain, nonatomic) AWEPlayInteractionDescriptionRenderLinesNumberInfo *linesNumberInfo;
@property (retain, nonatomic) AWEPlayInteractionDescriptionTextAction *textAction;
@property (retain, nonatomic) NSAttributedString *packLabelString;
@property (retain, nonatomic) UIScrollView *descriptionScrollView;
@property (retain, nonatomic) UIView *descriptionGradientView;
@property (retain, nonatomic) UIScrollView *outerScrollView;
@property (retain, nonatomic) UIView *descriptionContentView;
@property (retain, nonatomic) YYLabel *packLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MASConstraint *descriptionScrollViewHeightConstraint;
@property (nonatomic) double lastWidth;
@property (retain, nonatomic) UIView *extendBlankBtn;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (retain, nonatomic) AWEPlayInteractionDescriptionElementConfig *elementConfig;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) AWEPlayInteractionDescriptionLabel *descriptionLabel;
@property (nonatomic) double descContainerWidth;
@property (retain, nonatomic) AWEPlayInteractionTruncationTokenModel *truncationModel;
@property (nonatomic) BOOL isExpand;
@property (retain, nonatomic) AWEPlayInteractionDescriptionRenderConstraintsInfo *layoutInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionDescriptionElementAdapterClass;
+ (id)descriptionRendererWithElement:(id)a0;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)expandDescTextWithParams:(id)a0;
- (void)setUpNotification;
- (id)createPlainTextTailLabelWithAttributedText:(id)a0;
- (id)aAWEPlayInteractionDescriptionElementAdapter;
- (void)interactionDidShowMaskModify:(id)a0;
- (void)updateCaptionWidth;
- (void)updateDistanceOfDescription;
- (void)calculateTruncationToken;
- (id)createPackLabelAttributedString:(BOOL)a0;
- (void)setScrollMasConstraint:(double)a0;
- (void)resetMasConstraint;
- (id)createPackLabel;
- (BOOL)needDelayRender;
- (void)renderDescription;
- (void)packLabelForDidEndDisplaying;
- (void)trackTitleAndTruncationShow;
- (void)extendBlankBtnDidClick;
- (void)updateLayoutInfo;
- (BOOL)shouldReLayoutForRenderDidCalculateNumberOfLines;
- (void)setUpTruncationTokenWithTextContainer:(id)a0 relayout:(BOOL)a1;
- (void)setUpTextAction;
- (void)setUpLabelTapAction;
- (void)setUpAfterRender;
- (void)didRenderDescriptionElement;
- (void)packLabelForUserAction;
- (void)packLabelTriggerByUser:(BOOL)a0;
- (void)appendExtraPackString:(id)a0;
- (void)setUpDefaultBreakTruncationToken:(id)a0 textContainer:(id)a1;
- (id)getAttributedTextWithTail:(id)a0;
- (id)getAttributedStringWithExtraModel:(id)a0;
- (void)updateRenderForTruncationTokenUserAction:(BOOL)a0 limitHeight:(double)a1;
- (void)updateRenderForPackUserAction;
- (void)setUp;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)setUpUI;

@end
