@class NSString;

@interface AWEMusicStreamingImpl.LunaPopupInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ title;
    void /* function */ content;
    void /* function */ btnText;
}

@property (nonatomic) long long popupType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *btnText;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
