@class NSString;

@interface AWEPOIDetailTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
