@interface AWEProMotionFPSBooster : NSObject {
    double fps;
    id hint;
}

+ (void)boostFPSForScrolling;
+ (void)boostFPSForAppearance;
+ (id)setPreferredFPS:(double)a0 hint:(id)a1;
+ (void)unsetPreferredFPS:(id)a0;
+ (void)setupBooster;
+ (BOOL)isEnabled;
+ (void)tick:(id)a0;

- (void).cxx_destruct;

@end
