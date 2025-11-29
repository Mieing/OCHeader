@class NSString;

@interface AWEMVVerticalFilterInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *verticalID;
@property (copy, nonatomic) NSString *verticalName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
