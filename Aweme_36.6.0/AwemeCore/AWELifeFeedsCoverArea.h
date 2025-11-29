@class AWELifeFeedsCoverTopInfo, AWELifeFeedsCoverBottomInfo, AWEURLModel;

@interface AWELifeFeedsCoverArea : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *cover;
@property (retain, nonatomic) AWELifeFeedsCoverTopInfo *coverTopInfo;
@property (retain, nonatomic) AWELifeFeedsCoverBottomInfo *coverBottomInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
