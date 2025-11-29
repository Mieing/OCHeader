@class NSString;

@interface WAFlutterProxy : NSObject <IWAFlutterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;

- (BOOL)isSupportFlutter;
- (id)getVersionString;
- (id)makeSkylineRuntime;
- (id)makeSkylineViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)getEngineEntrypoint;
- (void)registerEnginePlugin:(id)a0;

@end
