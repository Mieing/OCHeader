@class NSString, NSArray;

@interface AWEImageAlbumBSConfigModel : MTLModel <MTLJSONSerializing, IESImageAlbumBSConfigModelProtocol>

@property (copy, nonatomic) NSString *gearName;
@property (copy, nonatomic) NSArray *bsModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bsModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
