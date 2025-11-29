@class NSMutableDictionary;

@interface AWEInnerPushExitRangeMappingProcessedModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *groupToSetIdsDict;
@property (retain, nonatomic) NSMutableDictionary *typeToSetIdsDict;
@property (retain, nonatomic) NSMutableDictionary *templateIdToSetIdsDict;

- (void)addKeyArray:(id)a0 setId:(id)a1 toDict:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
