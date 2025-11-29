@class NSDictionary, NSArray, NSString;

@interface IESECListKitItemTrackDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *commonData;
@property (copy, nonatomic) NSDictionary *realCommonData;
@property (copy, nonatomic) NSArray *exposureDatas;
@property (copy, nonatomic) NSArray *clickDatas;
@property (copy, nonatomic) NSArray *conditionDatas;
@property (copy, nonatomic) NSDictionary *adActionData;
@property (copy, nonatomic) NSDictionary *feedbackCommonData;
@property (copy, nonatomic) NSString *trackDataKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exposureDatasJSONTransformer;
+ (id)clickDatasJSONTransformer;
+ (id)conditionDatasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
