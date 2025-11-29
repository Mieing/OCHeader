@class NSString, NSMutableDictionary;

@interface AWEPublishContext : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) NSMutableDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyWithUID:(id)a0;

- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)p_removeTaskDictWithTaskId:(id)a0;
- (id)valueForTaskId:(id)a0 key:(id)a1;
- (void)setValue:(id)a0 forTaskId:(id)a1 key:(id)a2;
- (id)ignoreTaskIdValueWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
