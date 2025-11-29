@class NSNumber, NSArray, NSString;

@interface AWECardOCRConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *ocrInterval;
@property (retain, nonatomic) NSNumber *ocrTimeout;
@property (retain, nonatomic) NSNumber *maxImageSize;
@property (retain, nonatomic) NSNumber *ttnetMaxSize;
@property (retain, nonatomic) NSArray *cardConfigList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cardConfigWithParams:(id)a0;
- (double)ocrIntervalValue;
- (long long)ocrTimeoutValue;
- (long long)maxImageSizeValue;
- (long long)ttnetMaxSizeValue;
- (id)portraitLandscapeWithParams:(id)a0;
- (void).cxx_destruct;

@end
