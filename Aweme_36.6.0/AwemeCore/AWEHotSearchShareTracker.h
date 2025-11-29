@interface AWEHotSearchShareTracker : NSObject

+ (void)trackHotSearchPageHasScreenshot:(BOOL)a0;
+ (void)trackWithErrorType:(long long)a0 extra:(id)a1;
+ (void)trackPerformanceWithModel:(id)a0;
+ (id)errorType2Message:(long long)a0;

@end
