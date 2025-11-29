@class NSMutableDictionary;

@interface AWECommerceWorkflowLogContainerItem : AWECommerceWorkflowLogItem <NSCoding>

@property (retain, nonatomic) NSMutableDictionary *customParamDict;
@property (retain, nonatomic) NSMutableDictionary *componentDict;

- (void)setCustomParams:(id)a0;
- (id)uploadLogDict;
- (void)appendComponentTraceWithComponentKey:(id)a0 traceKey:(id)a1;
- (void)appendCustomParams:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;

@end
