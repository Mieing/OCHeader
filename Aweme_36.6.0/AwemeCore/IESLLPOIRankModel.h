@class NSString;

@interface IESLLPOIRankModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rankCode;
@property (copy, nonatomic) NSString *rankDescription;
@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) unsigned long long rankListType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
