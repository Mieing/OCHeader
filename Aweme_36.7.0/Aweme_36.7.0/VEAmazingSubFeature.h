@class NSString, NSArray;

@interface VEAmazingSubFeature : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *resourcePathsArray;
@property (copy, nonatomic) NSString *facePath;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double scaleX;
@property (nonatomic) double scaleY;
@property (nonatomic) double scaleZ;
@property (nonatomic) BOOL needUpdate;

- (id)initWithResourcePaths:(id)a0 facePath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isContentEqual:(id)a0;

@end
