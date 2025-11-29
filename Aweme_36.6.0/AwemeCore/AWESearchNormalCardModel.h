@class AWESearchNormalCardSummary, NSString, AWESearchNormalCardInfo, AWESearchNormalCardTitle;

@interface AWESearchNormalCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *contentOrigin;
@property (retain, nonatomic) AWESearchNormalCardInfo *info;
@property (retain, nonatomic) AWESearchNormalCardSummary *summary;
@property (retain, nonatomic) AWESearchNormalCardTitle *title;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
