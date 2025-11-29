@class NSString;

@interface IESMMCanvasAnimatedInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *path;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *animJsonParam;
@property (nonatomic) BOOL useNewAnim;
@property (copy, nonatomic) NSString *animInPath;
@property (nonatomic) double inStartTime;
@property (nonatomic) double inEndTime;
@property (copy, nonatomic) NSString *animOutPath;
@property (nonatomic) double outStartTime;
@property (nonatomic) double outEndTime;
@property (copy, nonatomic) NSString *animComboPath;
@property (nonatomic) double comboStartTime;
@property (nonatomic) double comboEndTime;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
