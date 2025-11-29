@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEIMEmojiAuthorWorklistResponseInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *worklist;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *nextCursor;
@property (copy, nonatomic) NSNumber *totalCount;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)worklistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
