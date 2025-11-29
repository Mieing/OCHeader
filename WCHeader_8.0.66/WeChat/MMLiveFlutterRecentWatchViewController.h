@class NSString;

@interface MMLiveFlutterRecentWatchViewController : MMFinderLiveFlutterViewController <WCFinderLiveExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (id)customFlutterPluginClasses;
- (void)onFinderLiveCloseWithTidByExtention:(id)a0;

@end
