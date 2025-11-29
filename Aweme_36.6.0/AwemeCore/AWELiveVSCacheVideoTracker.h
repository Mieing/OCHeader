@interface AWELiveVSCacheVideoTracker : NSObject

- (id)commonParams;
- (id)paramsWithEvent:(id)a0 model:(id)a1;
- (id)getDownloadStatusDict:(id)a0;
- (id)getVideoShowDict:(id)a0;
- (id)getDeleteClickDict:(id)a0;
- (id)getDownloadStatus:(unsigned long long)a0;
- (id)getVideoResolutionString:(long long)a0;
- (void)trackWithKey:(id)a0 model:(id)a1;

@end
