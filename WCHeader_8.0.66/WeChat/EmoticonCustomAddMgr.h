@class NSString, NSMutableSet;

@interface EmoticonCustomAddMgr : MMUserService <EmoticonCustomAddTaskDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *addEmoticonTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
