@class NSString, WCFinderMediaInfo;

@interface WCFinderFeedMediaWrapParam : NSObject

@property (copy, nonatomic) NSString *fileFormat;
@property (nonatomic) BOOL genArrDataSource;
@property (nonatomic) BOOL useSystemPlayer;
@property (nonatomic) unsigned long long liveCoverPreferredAspectRatio;
@property (nonatomic) BOOL ignoreCache;
@property (nonatomic) BOOL ignoreSettingToCache;
@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (nonatomic) int setMaxBitrate;
@property (nonatomic) BOOL forceUpdateMultiLevel;
@property (nonatomic) BOOL ignoreHDR;
@property (nonatomic) BOOL useOfflinePath;

+ (id)defaultParamWithMediaInfo:(id)a0;

- (void).cxx_destruct;

@end
