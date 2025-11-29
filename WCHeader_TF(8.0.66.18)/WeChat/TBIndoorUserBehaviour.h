@class NSString;

@interface TBIndoorUserBehaviour : NSObject

@property (copy, nonatomic) NSString *buildingID;
@property (nonatomic) unsigned long long showCount;
@property (nonatomic) unsigned long long activeLevelAPICount;
@property (nonatomic) unsigned long long pickerShowCount;

- (id)description;
- (id)descriptionDictionary;
- (void).cxx_destruct;

@end
