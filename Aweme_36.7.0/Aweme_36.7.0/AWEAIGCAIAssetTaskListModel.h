@class NSString, NSArray;

@interface AWEAIGCAIAssetTaskListModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (retain, nonatomic) NSArray *taskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getUnfinishedInviteTask;
- (void).cxx_destruct;

@end
