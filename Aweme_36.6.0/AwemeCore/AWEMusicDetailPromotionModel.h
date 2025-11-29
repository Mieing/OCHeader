@class NSString, AWEURLModel;

@interface AWEMusicDetailPromotionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) AWEURLModel *darkImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
