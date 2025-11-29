@class NSMutableArray;

@interface PerfAnalysisRequest : GPBMessage

@property (retain, nonatomic) NSMutableArray *datasArray;
@property (readonly, nonatomic) unsigned long long datasArray_Count;
@property (nonatomic) unsigned long long buildTime;
@property (nonatomic) BOOL hasBuildTime;
@property (retain, nonatomic) NSMutableArray *imageInfosArray;
@property (readonly, nonatomic) unsigned long long imageInfosArray_Count;

+ (id)descriptor;

@end
