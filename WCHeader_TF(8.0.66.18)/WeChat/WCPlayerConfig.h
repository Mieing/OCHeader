@class NSString;

@interface WCPlayerConfig : NSObject

@property (nonatomic) BOOL hiddenCloseBtn;
@property (nonatomic) BOOL hiddenIconView;
@property (nonatomic) BOOL hiddenBottomTool;
@property (nonatomic) BOOL showBottomButtons;
@property (nonatomic) BOOL hiddenAttachBtn;
@property (nonatomic) BOOL bForbidProgressBarAutoHidden;
@property (nonatomic) BOOL bPassTouchThroughControlView;
@property (retain, nonatomic) NSString *attachButtonTitle;
@property (nonatomic) double bottomToolBottomPadding;

- (void).cxx_destruct;

@end
