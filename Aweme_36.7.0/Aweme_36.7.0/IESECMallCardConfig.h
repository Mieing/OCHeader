@class NSString, NSDictionary;

@interface IESECMallCardConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *lynxSchemaPPE;
@property (copy, nonatomic) NSString *cardName;
@property (nonatomic) long long itemType;
@property (nonatomic) double predictHeight;
@property (copy, nonatomic) NSDictionary *queryMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
