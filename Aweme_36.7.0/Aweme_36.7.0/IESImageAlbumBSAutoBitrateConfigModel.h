@class NSString, NSArray;

@interface IESImageAlbumBSAutoBitrateConfigModel : MTLModel <IESImageAlbumBSAutoBitrateConfigModelProtocol, MTLJSONSerializing>

@property (copy, nonatomic) NSString *defaultGear;
@property (copy, nonatomic) NSArray *imageAlbumBSConfigModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageAlbumBSConfigModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
