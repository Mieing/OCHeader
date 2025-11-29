@class NSArray, NSString, NSSet, NSDictionary, NSMutableArray;

@interface AWEHPComponentBaseCallContext : NSObject

@property (copy, nonatomic) NSArray *dynamicStrategies;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSMutableArray *tabIDStack;
@property (copy, nonatomic) NSSet *cTags;
@property (copy, nonatomic) NSDictionary *bizTrackParams;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end
