@class NSString, IESECLiveImageURLModel;

@interface IESECLiveSelectItemImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *defaultImage;
@property (retain, nonatomic) IESECLiveImageURLModel *selectedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
