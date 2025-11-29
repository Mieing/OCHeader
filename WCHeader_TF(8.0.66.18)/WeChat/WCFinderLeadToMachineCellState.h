@class WCFinderDataItem;

@interface WCFinderLeadToMachineCellState : NSObject

@property (nonatomic) BOOL haveFailedToShow;
@property (nonatomic) BOOL haveShown;
@property (nonatomic) BOOL haveLeadToMachineTab;
@property (retain, nonatomic) WCFinderDataItem *machineTabFirstPlayableDataItem;
@property (nonatomic) BOOL machineTabIsTopRefreshing;

- (BOOL)checkDisplayState;
- (BOOL)_innerCheckDisplayState;
- (void)notifySwitchToMachineTab;
- (void).cxx_destruct;

@end
