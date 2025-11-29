@class NSString, NSArray, NSDictionary;

@interface AWEIMCodeGenHotspotInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSArray *groupListModelArray;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *trackingExt;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
