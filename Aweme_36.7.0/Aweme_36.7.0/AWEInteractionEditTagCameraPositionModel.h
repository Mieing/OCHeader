@class NSString;

@interface AWEInteractionEditTagCameraPositionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cameraPositionID;
@property (copy, nonatomic) NSString *cameraPositionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
