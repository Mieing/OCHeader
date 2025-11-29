@class NSString;

@interface EffectConfigParser : NSObject {
    struct EffectConfigParser { struct vector<audiobase::fx::EffectChainConfig, std::allocator<audiobase::fx::EffectChainConfig>> { struct EffectChainConfig *__begin_; struct EffectChainConfig *__end_; struct __compressed_pair<audiobase::fx::EffectChainConfig *, std::allocator<audiobase::fx::EffectChainConfig>> { struct EffectChainConfig *__value_; } __end_cap_; } m_chainConfigs; struct vector<audiobase::fx::EffectScaleStageConfig, std::allocator<audiobase::fx::EffectScaleStageConfig>> { struct EffectScaleStageConfig *__begin_; struct EffectScaleStageConfig *__end_; struct __compressed_pair<audiobase::fx::EffectScaleStageConfig *, std::allocator<audiobase::fx::EffectScaleStageConfig>> { struct EffectScaleStageConfig *__value_; } __end_cap_; } m_stageConfigs; struct vector<audiobase::fx::EffectScaleStageConfig, std::allocator<audiobase::fx::EffectScaleStageConfig>> { struct EffectScaleStageConfig *__begin_; struct EffectScaleStageConfig *__end_; struct __compressed_pair<audiobase::fx::EffectScaleStageConfig *, std::allocator<audiobase::fx::EffectScaleStageConfig>> { struct EffectScaleStageConfig *__value_; } __end_cap_; } m_pluggedConfigs; struct vector<audiobase::fx::EffectSliderConfig, std::allocator<audiobase::fx::EffectSliderConfig>> { struct EffectSliderConfig *__begin_; struct EffectSliderConfig *__end_; struct __compressed_pair<audiobase::fx::EffectSliderConfig *, std::allocator<audiobase::fx::EffectSliderConfig>> { struct EffectSliderConfig *__value_; } __end_cap_; } m_sliderConfigs; struct vector<audiobase::fx::EffectSliderConfig, std::allocator<audiobase::fx::EffectSliderConfig>> { struct EffectSliderConfig *__begin_; struct EffectSliderConfig *__end_; struct __compressed_pair<audiobase::fx::EffectSliderConfig *, std::allocator<audiobase::fx::EffectSliderConfig>> { struct EffectSliderConfig *__value_; } __end_cap_; } m_builtInSliderConfigs; struct pair<float, float> { float first; float second; } m_vocTargerLoundness; struct pair<float, float> { float first; float second; } m_accTargerLoundness; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_effectName; } _effectConfigParser;
}

@property (copy, nonatomic) NSString *configString;
@property (copy, nonatomic) NSString *identifier;

+ (BOOL)checkBpmIsVaild:(float)a0;

- (id)init;
- (BOOL)setEffectType:(unsigned long long)a0;
- (BOOL)loadConfigString:(id)a0 withIdentifier:(id)a1;
- (BOOL)canCreateEffectGraph;
- (BOOL)canCreateEffectChain;
- (unsigned long long)supportSliderCount;
- (float)sliderDefaultValue:(unsigned long long)a0;
- (BOOL)supportBPM;
- (id)irWavNames;
- (id)sliderName:(unsigned long long)a0;
- (id)configName;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
