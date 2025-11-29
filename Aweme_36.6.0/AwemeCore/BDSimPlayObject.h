@class NSString, NSNumber, NSMutableArray;
@protocol BDSimFeedPreCacheModel, BDSimFamiliarFeedListCacheModel, BDSimOriginalAdModel, BDSimVideoModel, BDSimFriendsFeedHistoryCacheModel, BDSimUserModel, BDSimBitrateSelectorResult;

@interface BDSimPlayObject : NSObject <BDSimPlayModel>

@property (retain, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) id<BDSimVideoModel, BDSimBitrateSelectorResult> video;
@property (nonatomic) BOOL isAds;
@property (nonatomic) long long awemeType;
@property (nonatomic) BOOL isCanPlay;
@property (nonatomic) BOOL isVRVideo;
@property (retain, nonatomic) NSNumber *indexInFeed;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) id<BDSimOriginalAdModel> originAdInfo;
@property (retain, nonatomic) id<BDSimFeedPreCacheModel> feedPreCacheModel;
@property (retain, nonatomic) id<BDSimFriendsFeedHistoryCacheModel> friendsFeedHistoryCacheModel;
@property (retain, nonatomic) id<BDSimFamiliarFeedListCacheModel> familiarFeedListCacheModel;
@property (retain, nonatomic) NSNumber *preloadBitrate;
@property (retain, nonatomic) NSNumber *preloadNetworkSpeed;
@property (copy, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) id<BDSimUserModel> author;
@property (retain, nonatomic) id playletInfoModel;
@property (nonatomic) BOOL isHardAd;
@property (nonatomic) double awe_audioLoudnessMLResult;
@property (nonatomic) BOOL awe_hasTriggerAudioLoudnessSmartServiceFlag;
@property (nonatomic) unsigned long long errorCodeForSR;
@property (nonatomic) unsigned long long preloadDowngradeGearForSR;
@property (retain, nonatomic) NSNumber *bitrateForFactor;
@property (nonatomic) double videoDuration;
@property (nonatomic) double playedDuration;
@property (nonatomic) double cachedDuration;
@property (retain, nonatomic) NSMutableArray *bitrateSelectRecords;
@property (weak, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
