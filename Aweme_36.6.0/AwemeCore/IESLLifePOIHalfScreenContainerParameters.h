@class NSString;

@interface IESLLifePOIHalfScreenContainerParameters : NSObject

@property (nonatomic) float halfRatio;
@property (copy, nonatomic) NSString *liveWindowRoomID;
@property (nonatomic) BOOL fromLive;
@property (nonatomic) BOOL isLiveFloatUserClosed;
@property (nonatomic) BOOL disableDragFull;
@property (nonatomic) BOOL useHalfHeight;
@property (nonatomic, getter=isEnableAccessibility) BOOL enableAccessibility;
@property (nonatomic) BOOL delayShow;
@property (nonatomic) BOOL supportFullToHalf;
@property (nonatomic) BOOL fixedToFull;
@property (nonatomic) BOOL fixedToHalf;
@property (copy, nonatomic) NSString *nearbySessionId;

- (void).cxx_destruct;

@end
