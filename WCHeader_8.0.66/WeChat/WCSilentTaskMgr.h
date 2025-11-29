@class NSString, NSMutableArray;

@interface WCSilentTaskMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *runners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
