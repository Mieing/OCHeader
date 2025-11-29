@class NSString, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaPopup : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ btnText;
    void /* function */ backgroundColor;
    void /* function */ secondTitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *btnText;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *backgroundPic;
@property (nonatomic) long long popupType;
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, copy) NSString *secondTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
