@class NSString, NSArray, NSDictionary, NSNumber;

@interface ACCGenericTemplateAIGCResourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resourceMD5;
@property (copy, nonatomic) NSString *resourceId;
@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *aigcId;
@property (copy, nonatomic) NSString *aigcPath;
@property (copy, nonatomic) NSString *aigcJson;
@property (copy, nonatomic) NSString *aigcParams;
@property (copy, nonatomic) NSString *keyId;
@property (copy, nonatomic) NSString *loraModelID;
@property (copy, nonatomic) NSString *sourceResourceFilePath;
@property (copy, nonatomic) NSArray *sourceResourceFilePathList;
@property (retain, nonatomic) NSNumber *preferredLongResolution;
@property (retain, nonatomic) NSNumber *preferredShortResolution;
@property (copy, nonatomic) NSString *processedResourceFilePath;
@property (copy, nonatomic) NSString *generatedText;
@property (copy, nonatomic) NSString *tosUri;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *slotID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getKeyID;
- (id)generateResourceMD5IfNeeded;
- (BOOL)checkHitCache:(id)a0 ignoreSourcePath:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
