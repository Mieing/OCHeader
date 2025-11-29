@class NSString, _TtC21AWEMusicStreamingImpl15ShareDouyinInfo, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaShareInfoResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ shareTitle;
    void /* function */ shareDesc;
    void /* function */ shareLink;
    void /* function */ shareWeiboDesc;
    void /* function */ shareLinkDesc;
    void /* function */ systemShareLink;
    void /* function */ shareDouyinTitle;
    void /* function */ shortShareLink;
    void /* function */ commonShareDesc;
}

@property (nonatomic, copy) NSString *shareTitle;
@property (nonatomic, copy) NSString *shareDesc;
@property (nonatomic, copy) NSString *shareLink;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *shareCover;
@property (nonatomic, copy) NSString *shareWeiboDesc;
@property (nonatomic, copy) NSString *shareLinkDesc;
@property (nonatomic, copy) NSString *systemShareLink;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15ShareDouyinInfo *shareDouyinInfo;
@property (nonatomic, copy) NSString *shareDouyinTitle;
@property (nonatomic, copy) NSString *shortShareLink;
@property (nonatomic, copy) NSString *commonShareDesc;

+ (id)shareCoverJSONTransformer;
+ (id)shareDouyinInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
