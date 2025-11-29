@class NSArray, NSString;

@interface QIndoorBuilding : NSObject

@property (retain, nonatomic) NSArray *levels;
@property (nonatomic) unsigned long long defaultLevelIndex;
@property (nonatomic) struct { double x; double y; } centerPoint;
@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;

- (id)initWithInternalBuilding:(id)a0;
- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;

@end
