@interface WAFlutterWxProxy : WAFlutterProxy

+ (id)sharedService;

- (BOOL)isSupportFlutter;
- (id)getEngineEntrypoint;
- (void)registerEnginePlugin:(id)a0;

@end
