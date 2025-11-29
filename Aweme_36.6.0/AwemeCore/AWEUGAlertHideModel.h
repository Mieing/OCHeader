@class NSString;

@interface AWEUGAlertHideModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long hideScene;
@property (nonatomic) long long hideTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
