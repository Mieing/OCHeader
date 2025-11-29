@class AWEAwemeModel, AWEPlayInteractionDescriptionModifyElement, AWEPlayInteractionContext;

@interface AWEPlayInteractionDescriptionRenderConstraintsInfo : NSObject

@property (weak, nonatomic) AWEPlayInteractionDescriptionModifyElement *element;
@property (weak, nonatomic) AWEPlayInteractionContext *interactionContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isMusicInfoShow;
@property (nonatomic) double descContainerWidth;
@property (nonatomic) double trailingOffsetOfLeftContainer;

+ (BOOL)shouldUseDescriptionLabelConstraintWidthWithModel:(id)a0;
+ (long long)feedDescExpandRangeType;
+ (BOOL)fixInteractionWidthEnable;
+ (id)renderLayoutInfoWithElement:(id)a0;

- (double)leftContainerWidth;
- (BOOL)shouldShowCancelMuteAnimation;
- (double)descriptionLabelConstraintWidth;
- (double)originBottomOffset;
- (double)descriptionLabelConstraintWidthForCurrentModel;
- (double)rightBlankHotExtraWidth;
- (double)rightExpandExtraWidth;
- (void)updateLayoutInfoWithElement:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)reset;

@end
