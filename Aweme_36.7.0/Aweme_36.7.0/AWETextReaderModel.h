@class NSString, IESMMVideoDataClipRange, AVAsset;

@interface AWETextReaderModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textId;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESMMVideoDataClipRange *textAudioRange;
@property (copy, nonatomic) NSString *textAudioPath;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *streamEffectID;
@property (copy, nonatomic) NSString *effectName;
@property (retain, nonatomic) AVAsset *textReaderAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textAudioRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
