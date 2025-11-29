@class GPBInt64ObjectDictionary;

@interface HTSLiveFansclubBadge : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *icons;
@property (readonly, nonatomic) unsigned long long icons_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *iconInfos;
@property (readonly, nonatomic) unsigned long long iconInfos_Count;

+ (id)descriptor;

@end
