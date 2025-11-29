@class NSString, AWEURLModel;

@interface AWEUserAwemeItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeId;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *gifCoverUrl;
@property (nonatomic) long long awemeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)awemeTypeJSONTransformer;
+ (id)gifCoverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
