@class NSNumber, NSString, NSDictionary;

@interface IESLiveNewAudienceEndingReplayInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *replayStatus;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *episodeId;
@property (copy, nonatomic) NSString *replayHint;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
