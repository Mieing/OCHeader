@class NSDictionary, NSString, NSMutableDictionary;

@interface IESLiveEnterRoomBusinessParam : NSObject <NSCopying> {
    NSMutableDictionary *_clickParam;
    NSMutableDictionary *_firstShowParam;
    NSMutableDictionary *_commonParam;
    NSMutableDictionary *_jsonDictionary;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDictionary *clickParam;
@property (readonly, nonatomic) NSDictionary *firstShowParam;
@property (readonly, nonatomic) NSDictionary *commonParam;
@property (readonly, nonatomic) NSString *jsonString;

- (void)addDictionary:(id)a0 forOption:(unsigned long long)a1;
- (void)removeParam:(id)a0 forOption:(unsigned long long)a1;
- (void)addDictionaryToJson:(id)a0;
- (void)addJsonStringToJson:(id)a0;
- (void)removeParamFromJson:(id)a0;
- (void)cleanParamWithOption:(unsigned long long)a0;
- (id)businessParamWithOption:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
