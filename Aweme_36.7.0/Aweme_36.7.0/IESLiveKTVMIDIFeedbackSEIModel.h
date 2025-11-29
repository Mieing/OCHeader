@class NSString, NSNumber, NSDictionary;

@interface IESLiveKTVMIDIFeedbackSEIModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *mixUserID;
@property (readonly, copy, nonatomic) NSString *mixAnchorID;
@property (copy, nonatomic) NSString *avatarThumb;
@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSNumber *songId;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long level;
@property (nonatomic) BOOL isHighScoreSinging;
@property (nonatomic) BOOL hitMidiRecordAb;
@property (copy, nonatomic) NSString *midiTips;
@property (copy, nonatomic) NSString *songTitle;
@property (retain, nonatomic) NSNumber *anchorID;
@property (nonatomic) double highScoreThreshold;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIDJSONTransformer;
+ (id)songIdJSONTransformer;
+ (id)anchorIDJSONTransformer;
+ (id)secUidJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
