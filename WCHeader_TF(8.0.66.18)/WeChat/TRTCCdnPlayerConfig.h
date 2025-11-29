@class NSString;

@interface TRTCCdnPlayerConfig : NSObject

@property (nonatomic) BOOL isDebugOn;
@property (nonatomic) long long orientation;
@property (nonatomic) long long renderMode;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) float minCache;
@property (nonatomic) float maxCache;
@property (nonatomic) float minCacheLeb;
@property (nonatomic) float maxCacheLeb;
@property (nonatomic) int wavejbmFlag;
@property (nonatomic) int wavejbmMode;
@property (nonatomic) float wavejbmMinSpeedRate;
@property (nonatomic) float wavejbmMaxSpeedRate;
@property (nonatomic) int lowDelayMode;
@property (nonatomic) int initialDelay;
@property (copy, nonatomic) NSString *gameAppId;
@property (nonatomic) float mMaxHalfFOVHor;
@property (nonatomic) float mMinHalfFOVHor;
@property (nonatomic) float mMaxHalfFOVVer;
@property (nonatomic) float mMinHalfFOVVer;

- (id)init;
- (void).cxx_destruct;

@end
