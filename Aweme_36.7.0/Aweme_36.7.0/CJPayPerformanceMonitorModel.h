@class NSArray, NSDictionary;
@protocol CJPayPerformanceUploadRule;

@interface CJPayPerformanceMonitorModel : JSONModel

@property (copy, nonatomic) NSArray<CJPayPerformanceUploadRule> *uploadRules;
@property (copy, nonatomic) NSDictionary *classNameDict;
@property (copy, nonatomic) NSArray *eventTrackerList;
@property (copy, nonatomic) NSArray *requestPathNotRecordList;
@property (nonatomic) BOOL isNotUploadFullNode;
@property (copy, nonatomic) NSArray *canNestedSceneKeyList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
