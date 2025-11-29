@class AWELifeFeedsInfoArea, AWELifeFeedsCoverArea;

@interface AWELifeFeedsUIData : AWEBaseApiModel

@property (retain, nonatomic) AWELifeFeedsCoverArea *coverArea;
@property (retain, nonatomic) AWELifeFeedsInfoArea *infoArea;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
