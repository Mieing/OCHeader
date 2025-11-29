@class NSArray, NSString;

@interface IESECGoodsDetailPageConfigure : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL collapseDetail;
@property (copy, nonatomic) NSArray *forbidFoldSliceIds;
@property (nonatomic) long long shareButtonAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
