@class AWEPOIFeedUgcItemModel, NSAttributedString;

@interface AWEPOIDetailUGCPhotosPreviewRateLayoutInfo : NSObject

@property (nonatomic) BOOL didCalculate;
@property (nonatomic) double feedbackSpacing;
@property (weak, nonatomic) AWEPOIFeedUgcItemModel *model;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) unsigned long long expandedStatus;
@property (nonatomic) double viewHeight;
@property (nonatomic) double nameHeight;
@property (nonatomic) double contentTagsHeight;
@property (nonatomic) double scoreTagsHeight;
@property (nonatomic) double contentHeight;
@property (nonatomic) double collapsedContentHeight;
@property (nonatomic) double expandedContentHeight;
@property (nonatomic) double feedBackViewHeight;
@property (nonatomic) double contentTagsTop;
@property (nonatomic) double scoreTagsTop;
@property (nonatomic) double contentTop;
@property (nonatomic) double feedBackViewTop;
@property (retain, nonatomic) NSAttributedString *contentRichText;

- (void)calculateContentHeightWithModel:(id)a0;
- (void)calculateSizeWithItem:(id)a0;
- (void)calculateNameWithModel:(id)a0;
- (void)calculateContentTagsHeightWithModel:(id)a0;
- (void)calculateScoreTagsHeightWithModel:(id)a0;
- (void)calculateFeedbackSizeWithModel:(id)a0;
- (void)calculateViewHeightWithModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
