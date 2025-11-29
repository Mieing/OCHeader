@class NSString, NSMutableDictionary, IESLiveComponentGroupInfo, NSMutableArray;

@interface IESLiveComponentSyncGroup : NSObject

@property (retain, nonatomic) NSString *groupID;
@property (nonatomic) double overTimeInterval;
@property (copy, nonatomic) id /* block */ previewBlock;
@property (copy, nonatomic) id /* block */ finishedBlock;
@property (retain, nonatomic) NSMutableArray *taskList;
@property (nonatomic) BOOL firstIn;
@property (nonatomic) BOOL firstOut;
@property (nonatomic) long long syncState;
@property (retain, nonatomic) NSMutableDictionary *subscriberItems;
@property (retain, nonatomic) IESLiveComponentGroupInfo *syncGroupInfo;

- (void)forceExcute;
- (void)notifyStateChanged;
- (void)registerWithID:(id)a0;
- (void)finishedWithID:(id)a0;
- (void)subscribeStateWithTaskID:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clear;
- (void)execute;
- (id)init;

@end
