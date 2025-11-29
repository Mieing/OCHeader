@class NSString;

@interface AWEDoubleColumnSearchMerchandiseSchemeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *video;
@property (copy, nonatomic) NSString *live;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
