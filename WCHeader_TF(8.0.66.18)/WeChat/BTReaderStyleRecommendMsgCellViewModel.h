@class UIColor, UIFont, NSMutableArray;

@interface BTReaderStyleRecommendMsgCellViewModel : BTBaseRecommendAppMsgCellViewModel

@property (readonly, nonatomic) struct CGSize { double width; double height; } titleSize;
@property (readonly, nonatomic) double titleMaxWidth;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property (readonly, nonatomic) UIColor *titleLabelColor;
@property (readonly, nonatomic) unsigned long long titleLineNumber;
@property (readonly, nonatomic) struct CGSize { double width; double height; } digestSize;
@property (readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property (readonly, nonatomic) BOOL isShowRecReasonLabel;

+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;

- (void)clearCacheOnDataChanged;
- (id)itemViewClassName;
- (double)viewHeight;
- (BOOL)isShowLargeCover;
- (BOOL)isTitleSingleLine;
- (void)clearTitleLabelCache;
- (id)digest;
- (id)digestFont;
- (double)digestMaxWidth;
- (unsigned long long)digestLineNumber;
- (BOOL)shouldShowRecReasonInDigestLabel;
- (id)recReasonStr;
- (id)recReasonColor;
- (struct CGSize { double x0; double x1; })coverImageViewSize;
- (unsigned long long)positionType;
- (double)normalCoverTopMargin;
- (double)normalCoverBottomMargin;
- (double)separateLineWidth;
- (void).cxx_destruct;

@end
