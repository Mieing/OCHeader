@class AWEShareModel, NSString, AWEURLModel, NSDictionary, NSNumber, AWEUserModel;
@protocol AWELiveHTSLiveEpisode;

@interface AWELiveEpisodeModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *episodeID;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEUserModel *owner;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (retain, nonatomic) AWEURLModel *roomCoverURL;
@property (copy, nonatomic) NSString *currentPeriod;
@property (nonatomic) long long videoType;
@property (nonatomic) long long recordType;
@property (nonatomic) long long recordSubType;
@property (retain, nonatomic) NSNumber *startLocaton;
@property (nonatomic) BOOL isMulti;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) NSString *previousPageOfProfile;
@property (nonatomic) BOOL isLiveSticker;
@property (copy, nonatomic) NSString *homepageUserID;
@property (copy, nonatomic) NSString *justWatchedVideoID;
@property (nonatomic) BOOL isWatchedVideoForEpisode;
@property (retain, nonatomic) id<AWELiveHTSLiveEpisode> episode;
@property (nonatomic) long long updateStatus;
@property (copy, nonatomic) NSString *previewText;
@property (retain, nonatomic) NSNumber *cameraId;
@property (retain, nonatomic) NSNumber *matchId;

+ (id)shareInfoJSONTransformer;
+ (id)ownerJSONTransformer;
+ (id)roomCoverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
