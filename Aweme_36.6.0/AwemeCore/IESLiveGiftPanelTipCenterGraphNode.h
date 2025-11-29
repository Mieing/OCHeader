@class NSString, NSMutableSet;

@interface IESLiveGiftPanelTipCenterGraphNode : NSObject

@property (retain, nonatomic) NSString *nodeID;
@property (retain, nonatomic) NSMutableSet *childNodes;
@property (nonatomic) long long dp;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
