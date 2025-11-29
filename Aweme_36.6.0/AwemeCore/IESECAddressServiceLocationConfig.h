@class NSArray, NSString;

@interface IESECAddressServiceLocationConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *cacheFirstBtmList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
