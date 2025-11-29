@class NSArray, NSString, NSDictionary;

@interface AWESearchAIGCChunkModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *data;
@property (copy, nonatomic) NSString *searchUniqueID;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationRank;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *nextKey;
@property (nonatomic) BOOL isSubRequest;
@property (nonatomic) BOOL isFirstChunk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
