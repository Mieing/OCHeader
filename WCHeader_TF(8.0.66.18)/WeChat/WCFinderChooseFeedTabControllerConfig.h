@class WCFinderFeedPickerParams;

@interface WCFinderChooseFeedTabControllerConfig : NSObject

@property (nonatomic) BOOL isPlanePickerStyle;
@property (retain, nonatomic) WCFinderFeedPickerParams *params;
@property (nonatomic) double cellHeightRatio;

- (id)init;
- (void).cxx_destruct;

@end
