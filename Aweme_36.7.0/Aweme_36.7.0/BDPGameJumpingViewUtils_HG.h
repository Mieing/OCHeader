@interface BDPGameJumpingViewUtils_HG : NSObject

+ (id)sharedInstance;

- (BOOL)_isRV;
- (id)_infosFormat:(long long)a0 entrance:(id)a1;
- (id)_generateSearchKey:(id)a0;
- (BOOL)canShowWithFrequencyControl:(long long)a0 entrance:(id)a1;
- (void)recordShowOnceWithFrequencyControl:(long long)a0 entrance:(id)a1;
- (id)_today;

@end
