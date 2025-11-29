@class NSString, NSDictionary;

@interface AWEHomePageRemoteItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) double cellHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
