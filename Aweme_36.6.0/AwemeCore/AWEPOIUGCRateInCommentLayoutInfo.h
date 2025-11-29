@class AWEPOIFeedUgcItemModel, NSAttributedString;

@interface AWEPOIUGCRateInCommentLayoutInfo : NSObject

@property (nonatomic) BOOL didCalculate;
@property (weak, nonatomic) AWEPOIFeedUgcItemModel *model;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL hasExpandButton;
@property (retain, nonatomic) NSAttributedString *contentRichText;
@property (nonatomic) double nameHeight;
@property (nonatomic) double contentTagsHeight;
@property (nonatomic) double scoreTagsHeight;
@property (nonatomic) double collapsedContentHeight;
@property (nonatomic) double expandedContentHeight;
@property (nonatomic) struct CGSize { double width; double height; } photosSize;
@property (nonatomic) double timeHeight;
@property (nonatomic) double nameTop;
@property (nonatomic) double userImageTop;
@property (nonatomic) double contentTagsTop;
@property (nonatomic) double scoreTagsTop;
@property (nonatomic) double contentTop;
@property (nonatomic) double photoTop;
@property (nonatomic) double timeTop;
@property (nonatomic) double contentHeight;

- (void)calculateContentHeightWithModel:(id)a0;
- (void)calculateSizeWithItem:(id)a0;
- (void)calculateNameWithModel:(id)a0;
- (void)calculateContentTagsHeightWithModel:(id)a0;
- (void)calculateScoreTagsHeightWithModel:(id)a0;
- (void)calculatePhotoSizeWithModel:(id)a0;
- (void)calculateCellHeightWithModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
