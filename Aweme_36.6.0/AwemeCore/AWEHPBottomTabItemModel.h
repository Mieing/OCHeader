@class NSString, NSDictionary, AWEHPTopTabConfigModel, AWEHPBottomTabIconURLModel;

@interface AWEHPBottomTabItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *channelType;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *channelInfo;
@property (retain, nonatomic) AWEHPTopTabConfigModel *topTabConfig;
@property (nonatomic) BOOL limitTitleModify;
@property (readonly, copy, nonatomic) AWEHPBottomTabIconURLModel *iconURLModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLModelJSONTransformer;
+ (id)topTabConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
