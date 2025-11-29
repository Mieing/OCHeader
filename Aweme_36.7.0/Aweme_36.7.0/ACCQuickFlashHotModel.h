@class NSString;

@interface ACCQuickFlashHotModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *flashMobId;
@property (copy, nonatomic) NSString *recommendSourceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
