@class IRISDataSnapshot;

@interface IRISDataSnapshotUtil : IRISDataModel

@property (retain, nonatomic) IRISDataSnapshot *currentSnapshot;
@property (nonatomic) unsigned long long lastTriggred;
@property (copy, nonatomic) id /* block */ onSnapshotTriggered;

- (id)_createOrGetAvailableSnapshotObject:(unsigned long long)a0;
- (id)trigger:(unsigned long long)a0 sender:(id)a1;
- (BOOL)captureHierarchy:(id)a0;
- (void).cxx_destruct;

@end
