@class NSString;

@interface AWEFeedValuableVideoMonitorController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)checkCurrentFeedVideoAdType:(id)a0;
+ (id)currentFeedVideoInfo;

@end
