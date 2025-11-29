@class NSString, AWEDTOClipRangeEntry;

@interface AWEDTOEditorTemplateBindingMusicModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL excludeMusic;
@property (nonatomic) BOOL hasEffectMusic;
@property (nonatomic) BOOL notRecommendMusic;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) double effectMusicVolume;
@property (retain, nonatomic) AWEDTOClipRangeEntry *clipRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clipRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
