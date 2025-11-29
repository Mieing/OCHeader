@class NSMutableArray, GPBEnumArray;

@interface JudgePlayModeExclusionResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) GPBEnumArray *exclusionPlayModeArray;
@property (readonly, nonatomic) unsigned long long exclusionPlayModeArray_Count;
@property (retain, nonatomic) GPBEnumArray *currentOpenPlayModeArray;
@property (readonly, nonatomic) unsigned long long currentOpenPlayModeArray_Count;
@property (nonatomic) BOOL hasExclusion;
@property (retain, nonatomic) NSMutableArray *adjustInfosArray;
@property (readonly, nonatomic) unsigned long long adjustInfosArray_Count;

+ (id)descriptor;

@end
