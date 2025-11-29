@class NSString, NSArray, NSDictionary, IESLiveKTVSEIOrderInfo, NSNumber;

@interface IESLiveKTVSEIModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *mixSenderUserID;
@property (readonly, copy, nonatomic) NSString *mixAnchorID;
@property (nonatomic) unsigned long long commandType;
@property (nonatomic) unsigned long long lyricType;
@property (retain, nonatomic) NSNumber *musicID;
@property (retain, nonatomic) NSNumber *senderUserID;
@property (retain, nonatomic) NSNumber *playStatus;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSArray *lyrics;
@property (retain, nonatomic) NSNumber *midiCover;
@property (copy, nonatomic) NSString *lyricURL;
@property (copy, nonatomic) NSString *midiURL;
@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *currentPlayTime;
@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) NSNumber *lyricsOffset;
@property (retain, nonatomic) NSNumber *anchorID;
@property (retain, nonatomic) NSString *coverURL;
@property (nonatomic) BOOL forceHide;
@property (retain, nonatomic) NSNumber *gridY;
@property (nonatomic) BOOL showScore;
@property (nonatomic) long long row;
@property (nonatomic) double score;
@property (retain, nonatomic) NSNumber *midiStatus;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) IESLiveKTVSEIOrderInfo *orderInfo;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isChorus;
@property (copy, nonatomic) NSString *midiDressId;
@property (copy, nonatomic) NSArray *copyrightedAppIds;
@property (copy, nonatomic) NSArray *copyrightedRegions;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderInfoJSONTransformer;
+ (id)sceneJSONTransformer;
+ (id)anchorIDJSONTransformer;
+ (id)musicIDJSONTransformer;
+ (id)senderUserIDJSONTransformer;
+ (id)commandTypeJSONTransformer;
+ (id)lyricTypeJSONTransformer;
+ (id)lyricsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
