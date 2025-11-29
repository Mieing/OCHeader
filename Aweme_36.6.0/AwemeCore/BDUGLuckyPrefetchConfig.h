@class NSNumber, NSString, NSDictionary;

@interface BDUGLuckyPrefetchConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *globalEnableInject;
@property (copy, nonatomic) NSString *project;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
