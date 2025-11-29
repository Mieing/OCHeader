@class NSString, NSArray;

@interface AWEMusicStreamingImpl.LunaActivityInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ key;
    void /* function */ audioEffectKeys;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic) long long quota;
@property (nonatomic) long long used;
@property (nonatomic) long long duration;
@property (nonatomic) long long nextReceivableTime;
@property (nonatomic) long long latestStartTime;
@property (nonatomic) long long latestExpireTime;
@property (nonatomic, copy) NSArray *audioEffectKeys;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
