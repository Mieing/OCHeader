@class AWEGrouponLifeFeedsCoverBottomInfo, AWEGrouponLifeFeedsCoverTopInfo, AWEURLModel;

@interface AWEGrouponLifeFeedsCoverArea : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *cover;
@property (retain, nonatomic) AWEGrouponLifeFeedsCoverTopInfo *coverTopInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsCoverBottomInfo *coverBottomInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
