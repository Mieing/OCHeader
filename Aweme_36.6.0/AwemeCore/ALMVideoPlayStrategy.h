@interface ALMVideoPlayStrategy : NSObject

@property (nonatomic) unsigned long long playerType;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL useH265;
@property (nonatomic) BOOL useHardDecode;
@property (nonatomic) BOOL usingHttpDNS;
@property (nonatomic) unsigned long long netWorkType;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL mute;
@property (nonatomic) double cacheDuration;
@property (nonatomic) BOOL enableMemoryOptimize;
@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (nonatomic) BOOL useVideoModelDASH;
@property (nonatomic) BOOL useDASH;
@property (nonatomic) BOOL useBASH;
@property (nonatomic) BOOL useABR;
@property (nonatomic) BOOL isLongVideo;

@end
