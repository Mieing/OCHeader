@class NSString;

@interface AWEMusicStreamingImpl.LunaVideoTag : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ name;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
