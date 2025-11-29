@class NSString, NSDictionary, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaUpsellInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ _displayType;
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ content;
    void /* function */ color;
    void /* function */ btnText;
    void /* function */ btnLink;
    void /* function */ subBtnText;
    void /* function */ subBtnLink;
    void /* function */ btnSecondLineText;
    void /* function */ jumpURI;
    void /* function */ adBtnText;
    void /* function */ rewardAdStyleColdStart;
    void /* function */ btnType;
    void /* function */ pageName;
    void /* function */ imageBannerID;
    void /* function */ upsellURL;
    void /* function */ moreUpsellInfos;
}

@property (nonatomic) long long upsellType;
@property (nonatomic) long long displayType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *color;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *imageURL;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *bottomImageURL;
@property (nonatomic, copy) NSString *btnText;
@property (nonatomic, copy) NSString *btnLink;
@property (nonatomic, copy) NSString *subBtnText;
@property (nonatomic, copy) NSString *subBtnLink;
@property (nonatomic, copy) NSString *btnSecondLineText;
@property (nonatomic, copy) NSString *jumpURI;
@property (nonatomic, copy) NSString *adBtnText;
@property (nonatomic, copy) NSString *rewardAdStyleColdStart;
@property (nonatomic) long long popupType;
@property (nonatomic, copy) NSString *btnType;
@property (nonatomic, copy) NSString *pageName;
@property (nonatomic, copy) NSString *imageBannerID;
@property (nonatomic, copy) NSString *upsellURL;
@property (nonatomic, copy) NSDictionary *moreUpsellInfos;

+ (id)imageUrlJSONTransformer;
+ (id)bottomImageURLJSONTransformer;
+ (id)moreUpsellInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
