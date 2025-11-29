@class NSMutableArray;

@interface FinderObjectLbsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *lbsRecommendReasonTitleList;
@property (retain, nonatomic) NSMutableArray *lbsRecommendReasonSummaryList;

+ (void)initialize;

- (void)setLbsRecommendReasonSummaryList:(id)a0;
- (id)lbsRecommendReasonSummaryList;
- (void)setLbsRecommendReasonTitleList:(id)a0;
- (id)lbsRecommendReasonTitleList;

@end
