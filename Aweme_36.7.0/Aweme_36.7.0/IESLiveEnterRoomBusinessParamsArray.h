@class NSMutableArray;

@interface IESLiveEnterRoomBusinessParamsArray : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *businessParams;

- (void)addDictionary:(id)a0 type:(unsigned long long)a1 option:(unsigned long long)a2;
- (void)addBusinessParamsWithDictionary:(id)a0;
- (id)communityParams;
- (void)addDictionary:(id)a0 type:(unsigned long long)a1;
- (void)addDictionaryToJson:(id)a0 type:(unsigned long long)a1;
- (id)componentParams;
- (void)addEventParams:(id)a0;
- (void)removeFirstShowParams;
- (id)innerFeedValueForKey:(id)a0;
- (id)roomEnterParams;
- (void)addExtraParamKey:(id)a0 value:(id)a1;
- (id)extraParamValueForKey:(id)a0;
- (void)addInnerFeedKey:(id)a0 value:(id)a1;
- (void)addExtraParamKey:(id)a0 value:(id)a1 option:(unsigned long long)a2;
- (id)extraParamValueForKey:(id)a0 option:(unsigned long long)a1;
- (id)paramWithType:(unsigned long long)a0;
- (id)findParamWithType:(unsigned long long)a0;
- (void)addJsonStringToJson:(id)a0 type:(unsigned long long)a1;
- (void)removeParamFromJson:(id)a0 type:(unsigned long long)a1;
- (void)removeParam:(id)a0 type:(unsigned long long)a1 forOption:(unsigned long long)a2;
- (id)businessParamsWithOption:(unsigned long long)a0;
- (BOOL)isComponentParamType:(id)a0;
- (void)addRoomEnterParams:(id)a0;
- (void)addBusinessParamsWithJsonString:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithOption:(unsigned long long)a0;

@end
