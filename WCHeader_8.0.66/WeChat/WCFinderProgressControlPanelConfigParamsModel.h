@class WCFinderFeedContentVM, WCFinderTableViewParamModel;

@interface WCFinderProgressControlPanelConfigParamsModel : NSObject

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) double currentPlayPosition;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL forbidProgressBarMovAnim;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL hasCompletelyPlay;
@property (retain, nonatomic) WCFinderTableViewParamModel *tableViewParamModel;

- (void).cxx_destruct;

@end
