@class IESECLinkConfig, IESECRadiusConfig, NSString, IESECImageModel;

@interface IESECImageBoxElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECImageModel *image;
@property (retain, nonatomic) IESECLinkConfig *link;
@property (retain, nonatomic) IESECRadiusConfig *radius;
@property (nonatomic) BOOL usePlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
