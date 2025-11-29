@class NSArray, NSString;

@interface AWEGiphySearchResultResponseObject : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *data;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long total;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
