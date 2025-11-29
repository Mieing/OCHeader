@class NSString;

@interface IESImageAlbumBSAutoBitrateModel : MTLModel <IESImageAlbumBSAutoBitrateModelProtocol, MTLJSONSerializing>

@property (copy, nonatomic) NSString *gearName;
@property (nonatomic) long long lowerNetwork;
@property (nonatomic) long long upperNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
