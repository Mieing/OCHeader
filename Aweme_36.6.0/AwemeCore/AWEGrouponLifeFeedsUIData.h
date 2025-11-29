@class AWEGrouponLifeFeedsCoverArea, AWEGrouponLifeFeedsInfoArea;

@interface AWEGrouponLifeFeedsUIData : AWEBaseApiModel

@property (retain, nonatomic) AWEGrouponLifeFeedsCoverArea *coverArea;
@property (retain, nonatomic) AWEGrouponLifeFeedsInfoArea *infoArea;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
