@class NSMutableDictionary;

@interface SurvivalInfo : IESLivePBBaseMessage

@property (nonatomic) long long stage;
@property (retain, nonatomic) NSMutableDictionary *anchorInfoMap;
@property (readonly, nonatomic) unsigned long long anchorInfoMap_Count;

+ (id)descriptor;

@end
