@class NSMutableDictionary;

@interface ComponentConfig : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *configMap;
@property (readonly, nonatomic) unsigned long long configMap_Count;

+ (id)descriptor;

@end
