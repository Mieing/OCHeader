@class AWECommentEvaluationRichContentElementEntranceConfig, NSString, AWECommentEvaluationRatingElementConfig, AWECommentEvaluationPreviewElementConfig, AWECommentEvaluationTitleElementConfig, AWECommentEvaluationExpandElementConfig, AWECommentEvaluationContentElementConfig;

@interface AWECommentEvaluationConfig : NSObject

@property (copy, nonatomic) NSString *nativeHostTitle;
@property (retain, nonatomic) AWECommentEvaluationTitleElementConfig *titleElementConfig;
@property (retain, nonatomic) AWECommentEvaluationRatingElementConfig *ratingElementConfig;
@property (retain, nonatomic) AWECommentEvaluationContentElementConfig *contentElementConfig;
@property (retain, nonatomic) AWECommentEvaluationExpandElementConfig *expandElementConfig;
@property (retain, nonatomic) AWECommentEvaluationRichContentElementEntranceConfig *richContentElementEntranceConfig;
@property (retain, nonatomic) AWECommentEvaluationPreviewElementConfig *previewElementConfig;

- (void)configWithDict:(id)a0;
- (void).cxx_destruct;

@end
