@class NSString, NSArray, AWEMusicVideoModel, NSDictionary, AWEMusicRiskInfoModel, NSObject, AWEMusicPlayerMeta, NSNumber;

@interface AWEMusicPlayerModel : MTLModel

@property (copy, nonatomic) NSString *awe_enterMethod;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *albumTitle;
@property (nonatomic) double playbackDuration;
@property (copy, nonatomic) NSString *artworkURLStr;
@property (copy, nonatomic) NSArray *playURLStrs;
@property (nonatomic) BOOL canBackgroundPlay;
@property (retain, nonatomic) NSDictionary *eventData;
@property (nonatomic) long long playActionTimes;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSObject *rawModel;
@property (retain, nonatomic) AWEMusicPlayerMeta *meta;
@property (nonatomic) BOOL enableTargetLoudness;
@property (retain, nonatomic) NSNumber *targetLoudness;
@property (nonatomic) BOOL isCopyrightPreview;
@property (nonatomic) BOOL isCopyrightAudition;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double chorusStartTime;
@property (copy, nonatomic) NSString *playActionType;
@property (copy, nonatomic) NSString *playFinishType;
@property (retain, nonatomic) AWEMusicRiskInfoModel *riskInfo;
@property (nonatomic) unsigned long long musicExtraType;
@property (retain, nonatomic) NSString *vid;
@property (nonatomic) unsigned long long quality;
@property (retain, nonatomic) AWEMusicVideoModel *videoModel;
@property (nonatomic) long long videoModelType;
@property (nonatomic) BOOL isRequestingVideoModel;
@property (nonatomic) BOOL useVidPlay;
@property (copy, nonatomic) id /* block */ videoModelUpdateBlock;
@property (copy, nonatomic) NSString *rquestId;
@property (nonatomic) BOOL isSeekingOver;
@property (nonatomic) BOOL onlyVipPlayable;

- (id)authenticationInfo;
- (id)initWithJSBDict:(id)a0;
- (id)buildNowPlayingInfo;
- (BOOL)isBeyoundCopyrightLimit:(double)a0;
- (BOOL)isBeforeCopyrightLimit:(double)a0;
- (BOOL)canAddedToQueue;
- (id)initWithMusicModel:(id)a0 ignoreAuditionDuration:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isVerified;

@end
