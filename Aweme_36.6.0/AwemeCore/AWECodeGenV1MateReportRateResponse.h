@interface AWECodeGenV1MateReportRateResponse : AWEBaseResponseModel

@property (nonatomic) int isCompleteMateObd;
@property (nonatomic) BOOL isShowStoryObd;
@property (nonatomic) BOOL isShowPopObd;
@property (nonatomic) BOOL isShowMateObd;
@property (nonatomic) BOOL isShowMatePublishObd;
@property (nonatomic) BOOL isShowPopRecommendObd;
@property (nonatomic) BOOL isShowCfCommentObd;
@property (nonatomic) BOOL isMomentTabMigrated;
@property (nonatomic) BOOL isMomentStoryAssetsMigrated;
@property (nonatomic) BOOL isStoryVisitListBubbleShown;

+ (id)JSONKeyPathsByPropertyKey;

@end
