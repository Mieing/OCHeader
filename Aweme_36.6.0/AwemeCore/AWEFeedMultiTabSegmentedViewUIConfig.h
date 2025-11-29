@class AWEHPTopTabRedDotUIConfig, AWEHPTopTabItemViewUIConfig;

@interface AWEFeedMultiTabSegmentedViewUIConfig : NSObject

@property (nonatomic) double selectLineHeight;
@property (nonatomic) double maskLayerWidth;
@property (retain, nonatomic) AWEHPTopTabItemViewUIConfig *itemViewUIConfig;
@property (retain, nonatomic) AWEHPTopTabRedDotUIConfig *redDotUIConfig;

- (void).cxx_destruct;

@end
