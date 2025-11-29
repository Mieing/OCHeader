@class IESSoloKTVTemplateBGModel, NSString, IESSoloKTVTemplateSingerModel, IESSoloKTVTemplateMidiModel, NSDictionary, IESSoloKTVTemplateTitleModel, IESSoloKTVTemplateLyricModel;

@interface IESSoloKTVTemplateMainModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *templateID;
@property (retain, nonatomic) IESSoloKTVTemplateTitleModel *title;
@property (retain, nonatomic) IESSoloKTVTemplateSingerModel *singer;
@property (retain, nonatomic) IESSoloKTVTemplateLyricModel *lyric;
@property (retain, nonatomic) IESSoloKTVTemplateMidiModel *midi;
@property (retain, nonatomic) IESSoloKTVTemplateBGModel *bg;
@property (nonatomic) int minVersion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singerJSONTransformer;
+ (id)bgJSONTransformer;
+ (id)createModelWithJsonString:(id)a0;
+ (id)lyricJSONTransformer;
+ (id)midiJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;

- (id)sortByIndexAsc;
- (void).cxx_destruct;

@end
