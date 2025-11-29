@class NSString;

@interface AWEMusicStreamingImpl.BitRate : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ quality;
}

@property (nonatomic) long long br;
@property (nonatomic) long long size;
@property (nonatomic, copy) NSString *quality;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
