@class NSMutableDictionary;

@interface TBPromoteIconBehaviourStat : NSObject

@property (retain, nonatomic) NSMutableDictionary *userBehaviourMap;

- (id)init;
- (id)description;
- (id)descriptionArray;
- (id)getOrCreatePromoteIconBehaviourWithPromoteID:(id)a0;
- (void)increasePromoteIconShowCount:(id)a0;
- (void).cxx_destruct;

@end
