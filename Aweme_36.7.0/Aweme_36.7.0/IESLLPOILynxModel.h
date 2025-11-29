@class NSString;

@interface IESLLPOILynxModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *originalLynxUrl;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *rawData;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
