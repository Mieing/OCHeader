@class NSString, NSMutableDictionary;

@interface FurionStashFactorSource : NSObject

@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSMutableDictionary *groupsMap;

- (void).cxx_destruct;
- (id)init;

@end
