@class NSArray, NSString, IESVideoBSAutoBitrateModel, IESVideoBSGroupModel;

@interface IESVideoBSSettingsResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *gearSet;
@property (retain, nonatomic) IESVideoBSGroupModel *adaptiveGroup;
@property (retain, nonatomic) IESVideoBSGroupModel *definitionGroup;
@property (retain, nonatomic) IESVideoBSGroupModel *flowGroup;
@property (nonatomic) long long defaultType;
@property (retain, nonatomic) NSArray *bandWidthMap;
@property (retain, nonatomic) IESVideoBSAutoBitrateModel *autoBitrateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gearSetJSONTransformer;
+ (id)adaptiveGroupJSONTransformer;
+ (id)definitionGroupJSONTransformer;
+ (id)flowGroupJSONTransformer;
+ (id)defaultTypeJSONTransformer;
+ (id)bandWidthMapJSONTransformer;
+ (id)autoBitrateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
