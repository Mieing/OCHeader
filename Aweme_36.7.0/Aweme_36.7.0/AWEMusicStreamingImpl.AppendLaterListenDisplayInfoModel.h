@class NSString;

@interface AWEMusicStreamingImpl.AppendLaterListenDisplayInfoModel : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ snackbarText;
    void /* function */ snackbarFallbackText;
    void /* function */ popviewText;
    void /* function */ popviewFallbackText;
}

@property (nonatomic, copy) NSString *snackbarText;
@property (nonatomic, copy) NSString *snackbarFallbackText;
@property (nonatomic, copy) NSString *popviewText;
@property (nonatomic, copy) NSString *popviewFallbackText;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
