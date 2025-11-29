@class NSArray, _TtC21AWEMusicStreamingImpl14LunaColourInfo;

@interface AWEMusicStreamingImpl.LunaTrackColor : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverGradientEffectColors;
    void /* unknown type, empty encoding */ $__lazy_storage_$_baseColors;
    void /* unknown type, empty encoding */ $__lazy_storage_$_normalLyricColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playingLyricColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_recommendReasonBackgroundColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_featuredCommentTagColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playingWaveColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pausedWaveColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentShareAdditionalColor;
}

@property (nonatomic, copy) NSArray *coverGradientEffectColors;
@property (nonatomic, copy) NSArray *baseColors;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *normalLyricColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *playingLyricColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *recommendReasonBackgroundColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *featuredCommentTagColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *backgroundColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *playingWaveColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *pausedWaveColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *commentShareAdditionalColor;

+ (id)featuredCommentTagColorJSONTransformer;
+ (id)coverGradientEffectColorsJSONTransformer;
+ (id)baseColorsJSONTransformer;
+ (id)normalLyricColorJSONTransformer;
+ (id)playingLyricColorJSONTransformer;
+ (id)recommendReasonBackgroundColorJSONTransformer;
+ (id)backgroundColorJSONTransformer;
+ (id)playingWaveColorJSONTransformer;
+ (id)pausedWaveColorColorsJSONTransformer;
+ (id)commentShareAdditionalColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
