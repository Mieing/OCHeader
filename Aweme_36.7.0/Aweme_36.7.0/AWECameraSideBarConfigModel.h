@class NSArray, NSString;

@interface AWECameraSideBarConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *itemList;
@property (nonatomic) long long exposedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
