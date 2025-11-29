@class NSNumber, NSArray, NSString;

@interface IESLLLiveAtmosphereIcon : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *iconWidth;
@property (copy, nonatomic) NSNumber *iconHeight;
@property (copy, nonatomic) NSArray *iconUrlList;
@property (copy, nonatomic) NSString *iconUri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
