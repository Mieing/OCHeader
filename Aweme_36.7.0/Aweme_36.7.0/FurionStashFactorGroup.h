@class NSString, NSMutableDictionary;

@interface FurionStashFactorGroup : NSObject

@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSMutableDictionary *factorKVMap;

- (void).cxx_destruct;
- (id)init;

@end
