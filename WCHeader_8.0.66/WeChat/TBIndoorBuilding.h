@class NSString, NSArray;

@interface TBIndoorBuilding : NSObject

@property (nonatomic) unsigned long long defaultLevelIndex;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSArray *levels;
@property (nonatomic) struct { double x; double y; } centerPoint;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;

- (id)descriptionDictionary;
- (id)description;
- (void).cxx_destruct;

@end
