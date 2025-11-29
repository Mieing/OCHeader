@class NSDictionary;

@interface IESLivePlayerMiddlewarePropertyContainer : NSObject

@property (nonatomic) unsigned long long generateStageType;
@property (nonatomic) BOOL isEnqueuingReusedRoom;
@property (nonatomic) BOOL smoothSwitching;
@property (nonatomic) BOOL headTrackingHasSet;
@property (nonatomic) BOOL hasPrepareItem;
@property (nonatomic) BOOL frameRenderMetaInfoCallbackEnable;
@property (copy, nonatomic) NSDictionary *playCallStack;
@property (copy, nonatomic) NSDictionary *muteCallStack;
@property (copy, nonatomic) NSDictionary *closeCallStack;
@property (copy, nonatomic) NSDictionary *stopCallStack;

- (void).cxx_destruct;
- (id)init;

@end
