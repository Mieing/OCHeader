@class NSString, NSArray;

@interface LOTShapeGroup : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) NSArray *items;

+ (id)shapeItemWithJSON:(id)a0;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJSON:(id)a0;

@end
