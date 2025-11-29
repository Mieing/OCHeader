@class NSString;

@interface AWELiveSkyLightServiceImpl : NSObject <AWELiveSkyLightService>

@property (nonatomic) BOOL liveTabSkyLightShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;


@end
