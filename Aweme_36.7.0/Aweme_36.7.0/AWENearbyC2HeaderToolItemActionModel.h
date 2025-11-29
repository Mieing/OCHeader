@class NSString, NSArray, AWENearbyC2HeaderToolItemModel;

@interface AWENearbyC2HeaderToolItemActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *jumpTargetUrl;
@property (copy, nonatomic) NSString *subEntranceListJson;
@property (retain, nonatomic) AWENearbyC2HeaderToolItemModel *switchEntranceConfig;
@property (copy, nonatomic) NSArray *subEntranceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
