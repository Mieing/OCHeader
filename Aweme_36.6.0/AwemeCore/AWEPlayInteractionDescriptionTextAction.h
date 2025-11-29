@class AWEPlayInteractionDescriptionRenderer, AWEPlayInteractionDescriptionContext, AWEAwemeResponseModel;

@interface AWEPlayInteractionDescriptionTextAction : NSObject

@property (weak, nonatomic) AWEPlayInteractionDescriptionRenderer *descriptionRenderer;
@property (nonatomic) BOOL isTapedDesc;
@property (retain, nonatomic) AWEAwemeResponseModel *relatedModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;

+ (Class)aAWEPlayInteractionAdapterClass;
+ (BOOL)canTapWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)getExtraModelFromAttributeString:(id)a0 name:(id)a1 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (Class)aAWEPlayInteractionDescriptionElementAdapterClass;
+ (id)descriptionTextAction;

- (id)aAWEPlayInteractionAdapter;
- (unsigned long long)stableEntryStrategyWithContext:(id)a0;
- (BOOL)hitStableExtendedConsumptionWithContext:(id)a0;
- (BOOL)canEnterMaskLayerWithContext:(id)a0;
- (id)aAWEPlayInteractionDescriptionElementAdapter;
- (BOOL)isStoryWithModel:(id)a0;
- (BOOL)isRelatedVideoSingleCardAutoPlayABTest;
- (void)didClickExtendBlank;
- (id /* block */)getDescriptionLabelTapAction;
- (void)expandDescTextWithParams:(id)a0 parserContext:(id)a1;
- (void)setUpTextActionWithDescriptionRenderer:(id)a0;
- (void)descriptionLabelDidHitTest:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1;
- (void)updateDescLabelIfExpand:(BOOL)a0 commentEnterSource:(unsigned long long)a1 canTapForNoMaskLayer:(BOOL)a2 parserContext:(id)a3;
- (id)getClickMethod;
- (id /* block */)descriptionLabelTapAction;
- (BOOL)shouldJumpToDetailPatImageAlbum:(BOOL)a0 parserContext:(id)a1;
- (void)descLabelDidClick:(BOOL)a0;
- (BOOL)enterMaskLayerWithCommentEnterSource:(unsigned long long)a0 parserContext:(id)a1;
- (BOOL)enterArticleDetailWithContext:(id)a0;
- (BOOL)awe_shouldAttachDetailTruncationWithContext:(id)a0;
- (void)updateDescLabelIfExpand:(BOOL)a0 commentEnterSource:(unsigned long long)a1 parserContext:(id)a2;
- (void)updateDescLabelIfExpand:(BOOL)a0 triggerByUser:(BOOL)a1 parserContext:(id)a2;
- (void)updateDescLabelIfExpand:(BOOL)a0 triggerByUser:(BOOL)a1 whenWillDisplay:(BOOL)a2 parserContext:(id)a3;
- (void)updateDescLabelScrollStyleIfExpand:(BOOL)a0 triggerByUser:(BOOL)a1 whenWillDisplay:(BOOL)a2 parserContext:(id)a3;
- (double)descriptionLimitHeightWithAttributedText:(id)a0 scrollable:(BOOL *)a1 lineHeight:(double *)a2 parserContext:(id)a3;
- (double)calculateLimitHeightWithContext:(id)a0;
- (double)calculateLimitHeightFromBusinessWithContext:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
