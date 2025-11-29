@class NSArray, NSString;

@interface IESECLiveRelatedInfoSupportConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *supportTypeArray;
@property (nonatomic) long long listSupportRelatedInfoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
