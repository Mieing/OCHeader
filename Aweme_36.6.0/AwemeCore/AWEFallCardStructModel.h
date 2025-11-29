@class NSString, NSDictionary, AWEFeedDoubleColumnCellRecommendReasonFallLabel, AWEFeedDoubleColumnCellCoverInfo;

@interface AWEFallCardStructModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSDictionary *highValueArea;
@property (retain, nonatomic) AWEFeedDoubleColumnCellCoverInfo *cellBaseColorInfo;
@property (retain, nonatomic) AWEFeedDoubleColumnCellRecommendReasonFallLabel *bottomRecommendReason;
@property (copy, nonatomic) NSString *recommendReasonV2;
@property (nonatomic) BOOL canExtendPlay;
@property (nonatomic) BOOL canSwitchToFall;
@property (nonatomic) BOOL isTidy;

+ (id)cellBaseColorInfoJSONTransformer;
+ (id)bottomRecommendReasonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
