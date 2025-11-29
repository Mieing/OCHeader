@class NSString, NSArray;

@interface BDSCPlayControlMediaInfoModel : NSObject

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *dramaId;
@property (copy, nonatomic) NSArray *dramaIds;
@property (nonatomic) long long loopMode;
@property (nonatomic) long long shuffle;
@property (nonatomic) double speed;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSArray *resolutions;
@property (nonatomic) unsigned long long stretch;
@property (copy, nonatomic) NSArray *speeds;
@property (nonatomic) long long skip;
@property (copy, nonatomic) NSString *sceneId;
@property (nonatomic) unsigned long long inheritConfig;
@property (nonatomic) unsigned long long featureConfig;
@property (copy, nonatomic) NSString *albumID;
@property (nonatomic) BOOL supportAutoResolution;
@property (nonatomic) BOOL resolutionMode;

+ (id)speedStringValue:(double)a0;

- (void)updateWithMediaInfo:(id)a0;
- (id)defaultSpeedList;
- (void).cxx_destruct;
- (id)init;

@end
