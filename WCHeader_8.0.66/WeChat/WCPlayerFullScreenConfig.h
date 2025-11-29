@class NSString, WCSNSPlayerPanelOperationReporter;

@interface WCPlayerFullScreenConfig : NSObject

@property (nonatomic) BOOL hiddenCloseBtn;
@property (nonatomic) BOOL videoProgressBarWithMultiSpeed;
@property (nonatomic) BOOL videoProgressBarAutoShow;
@property (nonatomic) BOOL hiddenProgressBar;
@property (nonatomic) BOOL hiddenTopTool;
@property (nonatomic) BOOL hiddenIconView;
@property (nonatomic) BOOL hiddenBottomTool;
@property (nonatomic) BOOL hiddenAttachBtn;
@property (nonatomic) BOOL bForbidProgressBarAutoHidden;
@property (nonatomic) BOOL bPassTouchThroughControlView;
@property (retain, nonatomic) NSString *attachButtonTitle;
@property (retain, nonatomic) NSString *shareableButtonTitle;
@property (nonatomic) double bottomToolBottomPadding;
@property (nonatomic) long long videoProgressBarType;
@property (retain, nonatomic) WCSNSPlayerPanelOperationReporter *playerPanelOperationReporter;

- (void).cxx_destruct;

@end
