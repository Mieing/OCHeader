@class NSString, _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo;

@interface AWEMusicStreamingImpl.LunaMediaStatus : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ type;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelInfo;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long status;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo *labelInfo;
@property (nonatomic) long long riskResult;
@property (nonatomic) BOOL isLimitedPreview;

+ (id)labelInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isPlayable;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
