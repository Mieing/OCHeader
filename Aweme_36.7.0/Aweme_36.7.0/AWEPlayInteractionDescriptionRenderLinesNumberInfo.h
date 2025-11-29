@class AWEPlayInteractionDescriptionContext, YYTextLayout, AWEPlayInteractionDescriptionRenderConstraintsInfo, NSNumber, AWEPlayInteractionDescriptionModifyElement;

@interface AWEPlayInteractionDescriptionRenderLinesNumberInfo : NSObject

@property (nonatomic) BOOL fixNumOfLinesForDanmaku;
@property (nonatomic) BOOL needDemoteLineCount;
@property (nonatomic) long long maxRowForNewAlbumImageLongTextLayout;
@property (retain, nonatomic) NSNumber *packStringLineNumberLimit;
@property (nonatomic) BOOL isSearchHighValueHashTagHidden;
@property (retain, nonatomic) YYTextLayout *textLayout;
@property (weak, nonatomic) AWEPlayInteractionDescriptionModifyElement *descriptionElement;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (nonatomic) double track_component_height_percent_before_fold;
@property (nonatomic) double track_title_height_percent_before_fold;
@property (retain, nonatomic) AWEPlayInteractionDescriptionRenderConstraintsInfo *layoutInfo;
@property (retain, nonatomic) NSNumber *maxLinesFromSeverStrategies;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)enableComponentHideCtrl;
+ (long long)titleLineForRecWith:(id)a0 context:(id)a1;

- (BOOL)shouldDescriptionFoldLineByHeightPercent;
- (unsigned long long)descriptionNumberOfLines;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)changePlayInteractionDescriptionElement;
- (void)changePlayInteractionDescriptionElementForNewFeedAlbumTextFoldConfig;
- (void)caculateOccupyHeightPercent;
- (BOOL)shouldSetDescCollapseFree;
- (long long)calculateFeedNoteMaxDescriptionLines:(long long)a0 andImageLayoutConfig:(id)a1;
- (long long)descLinesLimitWithComponentInfo:(id)a0;
- (id)elementsNeedCountHeight;
- (BOOL)canChangeDescLinesForSearchHighValueHashTag;
- (unsigned long long)getRenderNumberOfLines;
- (BOOL)shouldSetDescCollapseFriendsPageFreeABTest;
- (BOOL)shouldSetDescCollapseFriendsVideoFreeABTest;
- (void).cxx_destruct;
- (void)reset;

@end
