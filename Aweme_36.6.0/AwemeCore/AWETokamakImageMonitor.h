@interface AWETokamakImageMonitor : NSObject {
    long long _sampleValue;
}

+ (id)getBizTagWithURL:(id)a0;
+ (id)_nearestViewControllerNameForView:(id)a0;
+ (struct CGSize { double x0; double x1; })_viewSize:(id)a0;
+ (id)_generateViewPathForModel:(id)a0 shortPath:(BOOL)a1 userInfo:(BOOL)a2;
+ (id)_generateIssueTitle:(id)a0;

- (void)receiveImageModel:(id)a0;
- (void)trackImage:(id)a0;
- (id)initWithConfig:(id)a0;

@end
