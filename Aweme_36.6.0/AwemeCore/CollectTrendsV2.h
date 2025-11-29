@class NSMutableArray;

@interface CollectTrendsV2 : GPBMessage

@property (nonatomic) long long collectMusicId;
@property (nonatomic) BOOL hasCollectMusicId;
@property (retain, nonatomic) NSMutableArray *collectEffectIdArray;
@property (readonly, nonatomic) unsigned long long collectEffectIdArray_Count;
@property (retain, nonatomic) NSMutableArray *collectTemplateIdArray;
@property (readonly, nonatomic) unsigned long long collectTemplateIdArray_Count;

+ (id)descriptor;

@end
