@class NSArray;

@interface QIndoorMapData : NSObject

@property (readonly, nonatomic) BOOL indoorMapEnabled;
@property (readonly, nonatomic) long long keyType;
@property (readonly, copy, nonatomic) NSArray *buildingList;

- (id)initWithJSON:(id)a0;
- (id)toJSON;
- (void).cxx_destruct;

@end
