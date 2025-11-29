@class NSString, NSURL, JSC2CodeCacheDetail;

@interface WALocalCacheEvaluateResult : NSObject

@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSURL *sourceUrl;
@property (nonatomic) unsigned int scriptLength;
@property (nonatomic) unsigned int ret;
@property (nonatomic) unsigned long long startInjectTimeInMs;
@property (nonatomic) unsigned long long endInjectTimeInMs;
@property (nonatomic) unsigned int costTimeInMs;
@property (retain, nonatomic) JSC2CodeCacheDetail *codeCacheDetail;

- (void).cxx_destruct;

@end
