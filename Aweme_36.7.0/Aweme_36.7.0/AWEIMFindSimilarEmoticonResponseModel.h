@class NSString, NSArray, NSDictionary;

@interface AWEIMFindSimilarEmoticonResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *similarStickers;
@property (copy, nonatomic) NSString *searchLogID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)similarStickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
