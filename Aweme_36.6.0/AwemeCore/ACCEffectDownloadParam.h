@class NSArray, NSDictionary, NSString;

@interface ACCEffectDownloadParam : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needUpzip;
@property (copy, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
