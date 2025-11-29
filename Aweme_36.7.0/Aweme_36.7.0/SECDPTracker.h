@class NSString, SECSchemaValidateResult;

@interface SECDPTracker : NSObject

@property (nonatomic) unsigned long long startTime;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL blocked;
@property (nonatomic) BOOL hitCache;
@property (nonatomic) unsigned long long pkgVersion;
@property (nonatomic) BOOL useBuiltin;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) BOOL fallback;
@property (copy, nonatomic) NSString *fallbackReason;
@property (retain, nonatomic) SECSchemaValidateResult *validateResult;
@property (copy, nonatomic) NSString *engineType;

+ (unsigned long long)sampleRate;
+ (BOOL)enabled;

- (id)initWithURL:(id)a0 refer:(id)a1;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;

@end
