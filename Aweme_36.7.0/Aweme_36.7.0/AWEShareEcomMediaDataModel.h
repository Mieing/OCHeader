@class AWEShareEcomMediaModel, NSString;

@interface AWEShareEcomMediaDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEShareEcomMediaModel *ecomVideo;
@property (retain, nonatomic) AWEShareEcomMediaModel *ecomLive;
@property (copy, nonatomic) NSString *bcmShareId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ecomVideoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
