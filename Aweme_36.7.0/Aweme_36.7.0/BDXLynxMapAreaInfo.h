@class NSString;

@interface BDXLynxMapAreaInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSString *sID;
@property (copy, nonatomic) NSString *typeCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
