@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEIMEmojiResourceSearchResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *searchId;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *nextOffset;
@property (copy, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSArray *resources;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)resourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
