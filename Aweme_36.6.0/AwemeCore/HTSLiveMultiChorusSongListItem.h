@class NSMutableDictionary;

@interface HTSLiveMultiChorusSongListItem : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *userBaseMap;
@property (readonly, nonatomic) unsigned long long userBaseMap_Count;

+ (id)descriptor;

@end
