@class NSString;

@interface AWEMusicStreamingImpl.LunaPlayerInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ mediaID;
    void /* function */ url;
    void /* function */ videoModel;
}

@property (nonatomic) long long expireTime;
@property (nonatomic, copy) NSString *mediaID;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *videoModel;
@property (nonatomic) long long videoModelType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isPreview;

@end
