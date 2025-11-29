@class NSMutableDictionary;

@interface TBIndoorUserBehaviourStat : NSObject

@property (retain, nonatomic) NSMutableDictionary *userBehaviourMap;

- (id)init;
- (id)description;
- (id)descriptionArray;
- (id)getOrCreateUserBehaviourWithbuildingID:(id)a0;
- (void)increaseShowCount:(id)a0;
- (void)increaseCallActiveLevelAPICount:(id)a0;
- (void)increasePickerShowCount:(id)a0;
- (void).cxx_destruct;

@end
