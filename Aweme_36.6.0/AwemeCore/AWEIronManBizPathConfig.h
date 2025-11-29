@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEIronManBizPathConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long validTimeDuration;
@property (retain, nonatomic) NSNumber *clientSampleRate;
@property (nonatomic) BOOL useHighSample;
@property (copy, nonatomic) NSArray *defaultIndexParams;
@property (copy, nonatomic) NSDictionary *defaultMatchParams;
@property (copy, nonatomic) NSArray *defaultGetParams;
@property (copy, nonatomic) NSArray *additionalCommonParams;
@property (copy, nonatomic) NSArray *stages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stagesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
