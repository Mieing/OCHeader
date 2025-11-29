@class NSString, NSDictionary;

@interface CJPayPerformanceStage : NSObject

@property (copy, nonatomic) NSString *stageTypeStr;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long stageType;
@property (nonatomic) double currentTimeStamp;
@property (copy, nonatomic) NSString *sdkProcessID;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *processNodesStr;
@property (copy, nonatomic) NSString *pageNodesStr;
@property (copy, nonatomic) NSString *clickNodesStr;
@property (copy, nonatomic) NSString *backgroundNodesStr;
@property (copy, nonatomic) NSString *verifyNodesStr;
@property (copy, nonatomic) NSString *customTrackName;
@property (copy, nonatomic) NSDictionary *commonTrackData;
@property (nonatomic) struct CGPoint { double x; double y; } clickedPoint;

+ (id)stageTypeStrByENUM:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
