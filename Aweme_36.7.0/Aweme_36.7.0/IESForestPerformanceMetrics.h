@interface IESForestPerformanceMetrics : NSObject <NSCopying>

@property (nonatomic) double loadStart;
@property (nonatomic) double loadInternalStart;
@property (nonatomic) double loadInternalFinished;
@property (nonatomic) double loadFinish;
@property (nonatomic) double parseStart;
@property (nonatomic) double parseFinish;
@property (nonatomic) double memoryStart;
@property (nonatomic) double memoryFinish;
@property (nonatomic) double geckoStart;
@property (nonatomic) double geckoFinish;
@property (nonatomic) double builtinStart;
@property (nonatomic) double builtinFinish;
@property (nonatomic) double geckoUpdateStart;
@property (nonatomic) double geckoUpdateFinish;
@property (nonatomic) double cdnStart;
@property (nonatomic) double cdnFinish;
@property (nonatomic) double cdnRedirectStart;
@property (nonatomic) unsigned long long cdnRedirectCount;
@property (nonatomic) double cdnResponseHeaderStart;
@property (nonatomic) unsigned long long cdnResponseHeaderCount;
@property (nonatomic) double cdnChunkDataStart;
@property (nonatomic) unsigned long long cdnChunkDataCount;
@property (nonatomic) double cdnCacheStart;
@property (nonatomic) double cdnCacheFinish;
@property (nonatomic) double callbackSwitchThreadStart;
@property (nonatomic) double callbackSwitchThreadFinish;
@property (nonatomic) double callbackExecuteStart;
@property (nonatomic) double callbackExecuteFinish;
@property (nonatomic) double postProcessStart;
@property (nonatomic) double postProcessFinish;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
