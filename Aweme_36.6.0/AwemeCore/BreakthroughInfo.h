@class NSString, GPBInt64ObjectDictionary;

@interface BreakthroughInfo : IESLivePBBaseMessage

@property (nonatomic) long long stage;
@property (nonatomic) long long totalScore;
@property (copy, nonatomic) NSString *mvpAnchorId;
@property (nonatomic) int state;
@property (retain, nonatomic) GPBInt64ObjectDictionary *stageInfoMap;
@property (readonly, nonatomic) unsigned long long stageInfoMap_Count;

+ (id)descriptor;

@end
