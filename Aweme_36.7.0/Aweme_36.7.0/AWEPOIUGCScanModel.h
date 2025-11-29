@class NSString, NSArray;

@interface AWEPOIUGCScanModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *localId;
@property (nonatomic) long long createTime;
@property (nonatomic) double score;
@property (nonatomic) double vidaScore;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithAsset:(id)a0 result:(id)a1;
- (void).cxx_destruct;
- (id)toDictionary;

@end
