@class AnyPromise;

@interface RingToneSettingCellHandler : WCTableViewCellHandler

@property (retain, nonatomic) AnyPromise *globalRingPromise;
@property (retain, nonatomic) AnyPromise *friendsRingPromise;
@property (nonatomic) unsigned long long cellType;

- (id)genCellManager;
- (void)showRingTonePage;
- (void).cxx_destruct;

@end
