@class NSDictionary, NSString;

@interface IESLiveKTVMIDISEIModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) double userTone;
@property (nonatomic) double refTone;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long sentenceIndex;
@property (nonatomic) long long scoreLevel;
@property (nonatomic) long long comboTimes;
@property (nonatomic) long long forward;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scoreLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
