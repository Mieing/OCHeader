@class NSString, AWEURLModel;

@interface AWETrendsMusicInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
