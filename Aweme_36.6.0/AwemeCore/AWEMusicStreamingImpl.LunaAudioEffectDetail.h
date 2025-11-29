@class NSString;

@interface AWEMusicStreamingImpl.LunaAudioEffectDetail : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ key;
    void /* function */ name;
    void /* function */ desc;
    void /* function */ stage;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *stage;
@property (nonatomic) long long expireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
