@class NSString;

@interface AWEMusicStreamingImpl.ShareDouyinInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ storyMusicID;
    void /* function */ openAnchorShareId;
}

@property (nonatomic, copy) NSString *storyMusicID;
@property (nonatomic, copy) NSString *openAnchorShareId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
