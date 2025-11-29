@class NSString, NSArray, NSDictionary;

@interface AWEFollowUnreadEntrance : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *insertIds;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *count;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
