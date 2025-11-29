@class NSString;

@interface WCSNSPlayerPanelOperationReporter : NSObject

@property (nonatomic) long long speedupClickPV;
@property (nonatomic) long long progressBarDragPV;
@property (nonatomic) long long playClickPV;
@property (nonatomic) long long pauseClickPV;
@property (nonatomic) long long collapseClickPV;
@property (nonatomic) long long expandClickPV;
@property (nonatomic) long long clkShowPanlePV;
@property (nonatomic) long long clkHidePanlePV;
@property (nonatomic) long long snsPlayerProgressType;
@property (nonatomic) long long snsScene;
@property (copy, nonatomic) NSString *snsFeedId;
@property (copy, nonatomic) NSString *snsSessionId;
@property (copy, nonatomic) NSString *snsVideoURL;

- (void)doReport;
- (void).cxx_destruct;

@end
