@class UIView, NSString, AWESearchAIGCChatVideoContainer, UIImageView, UIButton, AWESearchAIGCQueryContext, CAGradientLayer, AWESearchAIGCChatImageContainer, AWESearchAIGCBubbleTextView, UILabel;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCBubbleView : AWESearchCachalotBaseCardView <AWESearchAIGCShareProtocol, AWESearchAIGCChatImageContainerDelegate, AWEMaskWindowHitTestProtocol>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) CAGradientLayer *bubbleLayer;
@property (retain, nonatomic) AWESearchAIGCBubbleTextView *bubbleLabel;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> bindViewModel;
@property (retain, nonatomic) UIButton *errorButton;
@property (retain, nonatomic) UILabel *debugLabel;
@property (nonatomic) unsigned long long viewType;
@property (retain, nonatomic) AWESearchAIGCChatImageContainer *imageContainer;
@property (retain, nonatomic) AWESearchAIGCQueryContext *queryContext;
@property (retain, nonatomic) AWESearchAIGCChatVideoContainer *videoContainer;
@property (retain, nonatomic) UIImageView *shareIsSelectedImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (unsigned long long)viewTypeForViewModel:(id)a0;
+ (struct CGSize { double x0; double x1; })textQuerySizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })imageQuerySizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })mixQuerySizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })videoQuerySizeWithViewModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })videoOnlySizeWithViewModel:(id)a0 width:(double)a1;
+ (id)attributeStringWithBubbleModel:(id)a0;

- (BOOL)shareEnable;
- (void)windowHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 targetView:(id)a2;
- (id)bubbleModel;
- (void)showPopover:(id)a0;
- (void)addBubbleLabelTap;
- (void)addLongPress;
- (void)addLongPressNotification;
- (BOOL)debugModel;
- (void)textQueryUpdateWithViewModel:(id)a0;
- (void)imageQueryUpdateWithViewModel:(id)a0;
- (void)mixQueryUpdateWithViewModel:(id)a0;
- (void)videoQueryUpdateWithViewModel:(id)a0;
- (void)videoOnlyUpdateWithViewModel:(id)a0;
- (void)bubbleLabelResignFirstResponder;
- (void)bubbleLabelTap:(id)a0;
- (void)sendModificationQuery:(id)a0;
- (void)errorButtonClick:(id)a0;
- (id)shareSearchID;
- (BOOL)isOriginalAnswerWithdrawn;
- (BOOL)isAllRenderFinished;
- (BOOL)videoPublishEnable;
- (id)searchAIGCPostEntryText;
- (void)shareBegin;
- (void)shareEnd;
- (void)shareDidSelected;
- (void)shareCancelSelected;
- (void)imageContainerDidSwitchQuestionToIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBubbleFrame;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end
