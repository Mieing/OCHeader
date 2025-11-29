@class NSString;

@interface AWEMusicStreamingImpl.LunaSongMakerDetailInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ artistID;
    void /* function */ name;
}

@property (nonatomic, copy) NSString *artistID;
@property (nonatomic, copy) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
