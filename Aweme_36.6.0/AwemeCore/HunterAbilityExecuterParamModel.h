@class NSString, NSDictionary;

@interface HunterAbilityExecuterParamModel : NSObject <HunterHostJSBExecuterParamModelProtocol>

@property (copy, nonatomic) NSString *jsbName;
@property (copy, nonatomic) NSDictionary *jsbParams;
@property (copy, nonatomic) NSDictionary *schemaQueryItems;
@property (nonatomic) BOOL enableGlobalJSB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
