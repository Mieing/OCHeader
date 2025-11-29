@class NSArray;

@interface MAOfflineProvince : MAOfflineItem <NSCoding>

@property (retain, nonatomic) NSArray *cities;

- (void)updateItemStatus;
- (void)executeInitializationWithDictionary:(id)a0;
- (id)citiesForDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
