@interface IESGCPTrackerPacker : NSObject

+ (id)trackEventNameWithNodeType:(long long)a0 action:(long long)a1;
+ (id)packTrackerResultParamsFromNode:(id)a0 action:(long long)a1 resultName:(id)a2 resultAttr:(id)a3;
+ (id)packBTMParamsWithNode:(id)a0;
+ (id)packTrackerParamsWithNode:(id)a0 action:(long long)a1 appResignActiveTimeArray:(id)a2;
+ (id)commonParamsWithDIContext:(id)a0;
+ (void)findViewHierarchyWithNode:(id)a0 moduleNodeArray:(id)a1 pageNode:(id *)a2;
+ (id)routeParamsWithPriviousNode:(id)a0;
+ (id)packTrackerResultParamsFromNodeParams:(id)a0 resultName:(id)a1 resultAttr:(id)a2;
+ (id)trackTypeStringWithNodeType:(long long)a0;
+ (id)trackActionStringWithNodeAction:(long long)a0;
+ (id)attributeParamsWithNode:(id)a0 action:(long long)a1;
+ (id)parentFlatAttributeWithModuleNodeArray:(id)a0 pageNode:(id)a1;
+ (double)showDurationWithNode:(id)a0 appResignActiveTimeArray:(id)a1;
+ (id)locationParamsWithModuleNodeArray:(id)a0 pageNode:(id)a1;
+ (id)nameKeyWithNodeType:(long long)a0;

@end
