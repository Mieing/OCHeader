@class NSString;

@interface AWEVideoRouterPushService : NSObject <AWEStudioPushService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveHandlingPushData:(id)a0;

- (id)startVideoWithPushData:(id)a0;

@end
