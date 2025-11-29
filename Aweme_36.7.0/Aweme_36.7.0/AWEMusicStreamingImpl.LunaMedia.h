@class NSString;

@interface AWEMusicStreamingImpl.LunaMedia : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ type;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
