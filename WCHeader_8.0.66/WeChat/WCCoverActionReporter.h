@class WCDataItem;

@interface WCCoverActionReporter : NSObject

@property (retain, nonatomic) WCDataItem *lastDisplayedDataItem;
@property (nonatomic) long long scene;

- (void)reportWithDataItem:(id)a0 action:(long long)a1;
- (void).cxx_destruct;

@end
