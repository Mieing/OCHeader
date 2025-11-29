@class NSArray, NSString;

@interface EcsCoreMapDeclareObjc : UnitRCObjcBaseClass <EcsCoreMapDeclare>

@property (retain, nonatomic) NSArray *_stringKeyList;
@property (retain, nonatomic) NSArray *_ecs_core_EcsOpenHandler_UrValueList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toMap_map_string_ecs_core_EcsOpenHandler_Ur:(id)a0;
+ (id)fromMap_map_string_ecs_core_EcsOpenHandler_Ur:(id)a0;

- (id)stringKeyList;
- (id)ecs_core_EcsOpenHandler_UrValueList;
- (void).cxx_destruct;

@end
