@class NSString;

@interface AWEPOIRankModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rankCode;
@property (copy, nonatomic) NSString *rankDescription;
@property (copy, nonatomic) NSString *schemaType;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) unsigned long long rankListType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
