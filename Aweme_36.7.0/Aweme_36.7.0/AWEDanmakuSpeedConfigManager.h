@class NSDictionary, NSArray;

@interface AWEDanmakuSpeedConfigManager : NSObject {
    NSArray *_sortedWidths;
    NSArray *_velocityFactors;
    BOOL _configNeedsUpdate;
}

@property (retain, nonatomic) NSDictionary *currentConfigDict;

+ (id)sharedManager;

- (void)setupWithConfig:(id)a0;
- (double)getVelocityFactorForWidth:(double)a0;
- (BOOL)isStringNumberDictionary:(id)a0;
- (void)updateConfigData;
- (long long)findIndexForWidth:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
