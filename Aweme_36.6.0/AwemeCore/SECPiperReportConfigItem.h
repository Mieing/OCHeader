@class NSString;

@interface SECPiperReportConfigItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cel;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *cacheName;
@property (nonatomic) unsigned long long sampleRate;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
