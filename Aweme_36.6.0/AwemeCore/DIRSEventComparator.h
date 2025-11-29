@class NSArray, NSDictionary;

@interface DIRSEventComparator : NSObject

@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDictionary *propertyKeys;
@property (copy, nonatomic) NSDictionary *propertyValues;

- (BOOL)isEventHit:(id)a0;
- (BOOL)isEventHit:(id)a0 withProperties:(id)a1;
- (BOOL)isArray:(id)a0 containArray:(id)a1;
- (BOOL)isDictionary:(id)a0 containDictionary:(id)a1;
- (void).cxx_destruct;

@end
