@class NSString;

@interface MMLiveTaskMgrProxy : NSObject <IMMLiveTaskMgrService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLive;
+ (BOOL)isLiveAndUsingMic;
+ (BOOL)isLiveAndUsingCamera;


@end
