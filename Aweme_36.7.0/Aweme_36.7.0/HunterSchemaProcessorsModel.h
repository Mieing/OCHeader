@class NSArray, NSString;

@interface HunterSchemaProcessorsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) long long timeout;
@property (retain, nonatomic) NSArray *taskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)appendTaskList:(id)a0;
- (void).cxx_destruct;

@end
