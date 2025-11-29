@class NSString, NSArray, BDByteCastSubtitleBean, BDByteCastSkipInfoBean, NSDictionary;

@interface BDByteCastPlayerBaseMediaAssetItem : NSObject

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *creator;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *albumArtURI;
@property (copy, nonatomic) NSString *lyrics;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *danmakuURL;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isLike;
@property (nonatomic) long long diggCount;
@property (nonatomic) long long commentCount;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long startPosition;
@property (nonatomic) BOOL mute;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *codec;
@property (nonatomic) long long oversea;
@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSArray *audioTrackList;
@property (nonatomic) long long audioTrack;
@property (copy, nonatomic) NSString *agentType;
@property (copy, nonatomic) NSString *cencKey;
@property (retain, nonatomic) BDByteCastSubtitleBean *subtitle;
@property (retain, nonatomic) BDByteCastSkipInfoBean *skipInfo;
@property (retain, nonatomic) id ads;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
