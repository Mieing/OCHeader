@class NSString, BDMannorComponentRelationInfo;

@interface BDMannorStyleTemplateComponentRelationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) BDMannorComponentRelationInfo *toShowToHide;
@property (retain, nonatomic) BDMannorComponentRelationInfo *toHideToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
