@class NSDictionary, NSString, NSArray;

@interface AWEHPTopTabConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *sideBarData;
@property (copy, nonatomic) NSString *rightFirstEntrance;
@property (retain, nonatomic) NSArray *tabList;
@property (copy, nonatomic) NSString *landTab;
@property (copy, nonatomic) NSString *mainTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
