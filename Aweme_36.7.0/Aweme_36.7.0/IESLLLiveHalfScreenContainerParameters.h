@class NSString;

@interface IESLLLiveHalfScreenContainerParameters : NSObject

@property (nonatomic) float halfRatio;
@property (nonatomic) float fullModeRatio;
@property (copy, nonatomic) NSString *liveWindowRoomID;
@property (nonatomic) BOOL fromLive;
@property (nonatomic) BOOL isLiveFloatUserClosed;
@property (nonatomic) BOOL disableDragFull;
@property (nonatomic) BOOL useHalfHeight;
@property (nonatomic) BOOL useFullHeight;
@property (nonatomic) BOOL disableSmallWindow;
@property (nonatomic) BOOL supportFullToClose;
@property (nonatomic, getter=isEnableAccessibility) BOOL enableAccessibility;
@property (nonatomic) BOOL delayShow;
@property (nonatomic) BOOL supportFullToHalf;
@property (nonatomic) BOOL fixedToFull;
@property (nonatomic) BOOL fixedToHalf;

- (void).cxx_destruct;

@end
