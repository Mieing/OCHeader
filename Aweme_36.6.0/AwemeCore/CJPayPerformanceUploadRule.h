@class CJPayPerformanceStage, NSString, CJPayPerformanceUploadNode, NSMutableArray;

@interface CJPayPerformanceUploadRule : JSONModel <NSCopying>

@property (readonly, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) CJPayPerformanceStage *headStage;
@property (retain, nonatomic) CJPayPerformanceStage *endStage;
@property (copy, nonatomic) NSString *searchMethod;
@property (retain, nonatomic) CJPayPerformanceUploadNode *headNode;
@property (retain, nonatomic) CJPayPerformanceUploadNode *endNode;
@property (copy, nonatomic) NSString *mapToEventName;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)isEndToHead;
- (BOOL)isHeadToEnd;
- (void)processStage:(id)a0;
- (void)uploadEvents:(id /* block */)a0;
- (void)p_processHeadToEndStage:(id)a0;
- (void)p_processEndToHeadStage:(id)a0;
- (void)p_caculateEventAndReset;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
