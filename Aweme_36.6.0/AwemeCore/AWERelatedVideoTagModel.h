@class NSString, AWERelatedVideoTagItem;

@interface AWERelatedVideoTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWERelatedVideoTagItem *level1;
@property (retain, nonatomic) AWERelatedVideoTagItem *level2;
@property (retain, nonatomic) AWERelatedVideoTagItem *level3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)level1JSONTransformer;
+ (id)level2JSONTransformer;
+ (id)level3JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
