@class NSString, NSArray;

@interface IESECTabKitTabApiConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *apiURL;
@property (copy, nonatomic) NSString *apiParams;
@property (copy, nonatomic) NSArray *appendAPIParamsKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
