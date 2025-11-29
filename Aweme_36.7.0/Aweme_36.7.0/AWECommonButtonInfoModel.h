@class NSNumber, NSString, AWECommonButtonBasicInfoModel;

@interface AWECommonButtonInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECommonButtonBasicInfoModel *basicInfo;
@property (copy, nonatomic) NSNumber *priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
