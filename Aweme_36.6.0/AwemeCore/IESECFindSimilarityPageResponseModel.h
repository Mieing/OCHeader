@class NSString;

@interface IESECFindSimilarityPageResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long cursor;
@property (nonatomic) BOOL isHasMore;
@property (copy, nonatomic) NSString *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
