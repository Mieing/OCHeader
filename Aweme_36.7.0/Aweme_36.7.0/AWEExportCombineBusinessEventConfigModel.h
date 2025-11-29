@class NSDictionary, NSString;

@interface AWEExportCombineBusinessEventConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) long long cacheListCapacity;
@property (nonatomic) double beforeTime;
@property (nonatomic) double afterTime;
@property (copy, nonatomic) NSDictionary *eventListDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
