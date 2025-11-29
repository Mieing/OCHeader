@class NSString, _TtC21AWEMusicStreamingImpl13LunaPopupInfo;

@interface AWEMusicStreamingImpl.LunaAllCommentsLikedDetail : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ $__lazy_storage_$_popup;
    void /* function */ countString;
}

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaPopupInfo *popup;
@property (nonatomic) BOOL isShow;
@property (nonatomic, copy) NSString *countString;
@property (nonatomic, readonly) long long count;

+ (id)popupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
